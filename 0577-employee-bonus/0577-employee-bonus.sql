# Write your MySQL query statement below
SELECT emp.name, bn.bonus
FROM Employee AS emp LEFT JOIN Bonus as bn
ON emp.empId = bn.empId
WHERE bn.bonus IS NULL 
OR bn.bonus < 1000;