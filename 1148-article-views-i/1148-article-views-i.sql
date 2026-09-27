# Write your MySQL query statement below
SELECT author_id as id from Views
Where author_id = viewer_id
GROUP BY author_id
ORDER BY author_id;