# Write your MySQL query statement below
/*select max(salary) as SecondHighestSalary from Employee where salary <(select max(salary) from Employee);*/
/*select max(e2.salary) as SecondHighestSalary from Employee e1, Employee e2 where e1.salary>e2.salary;*/
/*select ifnull((select distinct salary from Employee limit 1 offset 1),null)as SecondHighestSalary;*/
select ifnull((
 select distinct Salary
 from Employee
 order by Salary desc
 limit 1 offset 1),
 null)
as SecondHighestSalary;
