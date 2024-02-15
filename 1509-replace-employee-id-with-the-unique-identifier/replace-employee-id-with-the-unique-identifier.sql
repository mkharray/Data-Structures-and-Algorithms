-- Write your PostgreSQL query statement below
-- SELECT  Employees.id as unique_id, Employees.name from Employees
-- LEFT JOIN EmployeeUNI on EmployeeUNI.id = Employees.id;
SELECT
EmployeeUNI.unique_id, Employees.name
FROM Employees
LEFT JOIN EmployeeUNI on Employees.id = EmployeeUNI.id