-- Write your PostgreSQL query statement below
SELECT name FROM customer
where
referee_id != 2 OR referee_id is NULL;