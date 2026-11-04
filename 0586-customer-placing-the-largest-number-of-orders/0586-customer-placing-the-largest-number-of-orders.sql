# Write your MySQL query statement below
SELECT customer_number
FROM (
    SELECT customer_number, COUNT(customer_number) AS cnt FROM Orders
    GROUP BY customer_number
    ORDER BY cnt DESC
)
AS t
HAVING MAX(cnt);