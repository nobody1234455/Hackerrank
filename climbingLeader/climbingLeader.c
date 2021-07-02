#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *climbingLeaderboard(int ranked_count, int *ranked, int player_count, int *player, int *result_count)
{
    //result
    int *result;
    result = (int *)malloc(sizeof(int) * player_count);
    //Set a new array be the ranking
    *result_count = player_count;
    int *actual_ranked;
    actual_ranked = (int *)malloc(sizeof(int) * ranked_count);
    int current_ranked = 1;
    actual_ranked[0] = current_ranked;
    for (int i = 1; i < ranked_count; i++)
    {
        if (ranked[i - 1] == ranked[i])
        {
            actual_ranked[i] = current_ranked;
        }
        else
        {
            current_ranked++;
            actual_ranked[i] = current_ranked;
        }
    }

    //Manipulate the player's Scores
    for (int i = 0; i < player_count; i++)
    {
        int j = ranked_count - 1;
        int flag = 1;
        while (flag == 1)
        {
            if (player[i] < ranked[j])
            {
                result[i] = (actual_ranked[j] + 1);
                break;
            }
            else if (player[i] == ranked[j])
            {
                result[i] = actual_ranked[j];
                break;
            }
            else if (player[i] > ranked[j] && player[i] < ranked[j - 1])
            {
                result[i] = (actual_ranked[j - 1] + 1);
                break;
            }
            j--;
        }
    }
    if (player[player_count - 1] > ranked[ranked_count - 1])
        result[player_count - 1] = 1;
    return result;
}

int main()
{
    int ranked_count = 6;
    int *rank;
    rank = (int *)malloc(sizeof(int) * ranked_count);
    rank[0] = 100;
    rank[1] = 90;
    rank[2] = 90;
    rank[3] = 80;
    rank[4] = 75;
    rank[5] = 60;
    int player_count = 5;
    int *player_score;
    player_score = (int *)malloc(sizeof(int) * player_count);
    player_score[0] = 50;
    player_score[1] = 65;
    player_score[2] = 77;
    player_score[3] = 90;
    player_score[4] = 102;
    int result_count;
    int *result = climbingLeaderboard(ranked_count, rank, player_count, player_score, &result_count);
    for (int i = 0; i < result_count; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}