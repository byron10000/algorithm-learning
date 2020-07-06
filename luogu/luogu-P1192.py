def main():
    n,k = list(map(int,input().split()))
    nums = [0] * (n + 1)
    nums[0] = 1
    nums[1] = 1
    for i in range(2,n + 1) :
        if (i <= k) :
            nums[i] = nums[i - 1] * 2 % 100003
        else :
            nums[i] = (nums[i - 1] * 2 - nums[i - k - 1]) % 100003
    print(nums[-1] % 100003)
if __name__ == '__main__':
    main()