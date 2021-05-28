# Greedy Approach

**Problem: You have to make a change of an amount using the smallest possible number of coins.**

    Amount: $28

    Available coins:
      $5 coin
      $2 coin
      $1 coin

----------
    Solution:

```c
Create an empty solution-set = { }.
coins = {5, 2, 1}
sum = 0
While sum ≠ 28, do the following.
Select a coin C from coins such that sum + C < 28.
If C + sum > 28, return no solution.
Else, sum = sum + C.
Add C to solution-set.
Up to the first 5 iterations,
the solution set contains 5 $5 coins.
After that, we get 1 $2 coin and finally,1 $1 coin.
```
