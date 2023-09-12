#include <cs50.h>
#include <stdio.h>

int calc_years(int start, int end);

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    do
    {
        start_size = get_int("Start population: ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    int end_size;
    do
    {
        end_size = get_int("End population: ");
    }
    while (end_size < start_size);


    // TODO: Calculate number of years until we reach threshold
    int n = calc_years(start_size, end_size);

    // TODO: Print number of years
    printf("Years: %i\n", n);
}

int calc_years(int start, int end) {

    int years = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        years++;
    }

    return years;
}
