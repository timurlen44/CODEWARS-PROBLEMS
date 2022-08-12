#include <stdlib.h>
#include <stdbool.h>

struct interval {
    int first;
    int second;
};

bool overlapping[32] = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
int overlapping_first  = 0;
int overlapping_second = 0;

bool overlapping_is_happen = false;

bool overlapping_detect_func(const struct interval *v, size_t n)
{
    for (size_t i1 = 0;i1<n;i1++)
    {


        if(!overlapping_is_happen)
        {
            overlapping_first  = v[i1].first;
            overlapping_second = v[i1].second;
        }

        for(size_t i2 = 0;i2<n;i2++)
        {
            if(i2 == i1 || overlapping[i2] == true)
            {
                continue;
            }

        if(overlapping_first <= v[i2].second && overlapping_second>=v[i2].second)
        {
            overlapping[i2] = true;
            overlapping_is_happen = true;
            if(overlapping_first>v[i2].first)
            {
                overlapping_first = v[i2].first;
            }

        }
        else if(overlapping_first <= v[i2].first && overlapping_second >= v[i2].first)
        {
          overlapping[i2] = true;
          overlapping_is_happen = true;

          if(overlapping_second<v[i2].second)
          {
              overlapping_second = v[i2].second;
          }
        }

      }
    }
    return overlapping_is_happen;
}

int sum_intervals(const struct interval *v, size_t n)
{
    if(n == 1)
    {
        return v[0].second - v[0].first;
    }
    int sum = 0;

    while(overlapping_detect_func(&v[0],n) == true)
    {
        sum += overlapping_second - overlapping_first;
        overlapping_second = 0;overlapping_first = 0;overlapping_is_happen = false;

    }
    for(size_t i = 0;i<n;i++)
    {
        if(!overlapping[i])
        {
            sum += v[i].second - v[i].first;
        }
    }

    overlapping_first  = 0;
    overlapping_second = 0;
    overlapping_is_happen = false;

    for(size_t i = 0;i<n;i++)
    {

        overlapping[i] = false;
    }
    return sum;
}
