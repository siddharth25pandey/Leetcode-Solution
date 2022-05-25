# Write your MySQL query statement below
select C1.name as Customers 
from Customers as C1 where C1.id NOT IN (select C2.customerId from Orders as C2);