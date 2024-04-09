# Write your MySQL query statement below
SELECT email from Person
group by email
HAVING count(email) > 1;