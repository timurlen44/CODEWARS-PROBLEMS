#include <stddef.h>

float finduniq(const float *nums, size_t n)
{
  float temp_num = nums[0];
  if(nums[0] != nums[1])
  {
    if(nums[1] == nums[2])
    {
     return nums[0];
    }
    else
    {
      return nums[1];
    }
  }
  else if(nums[1] != nums[2])
  {
    if(nums[0] == nums[2])
    {
     return nums[1];
    }
    else
    {
      return nums[2];
    }
  }

  for(size_t i = 3;i<n;i++)
  {
      if(temp_num != nums[i])
      {
        return nums[i];
      }
  }
    return 0./.0;
}
