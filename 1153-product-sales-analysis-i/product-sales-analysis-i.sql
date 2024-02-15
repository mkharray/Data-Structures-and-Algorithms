-- Write your PostgreSQL query statement below
select product_name,year,price 
from sales
JOIN product on sales.product_id = product.product_id;