# Write your MySQL query statement below
select E1.name as Employee
from Employee as E1, Employee as E2 
where E1.managerId = E2.Id and E1.salary > E2.salary