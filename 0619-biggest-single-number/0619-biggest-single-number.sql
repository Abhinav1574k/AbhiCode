# Write your MySQL query statement below
SELECT MAX(num) AS num FROM
(
    SELECT num FROM MyNUmbers
    GROUP BY num
    HAVING COUNT(num) < 2
)
AS res;