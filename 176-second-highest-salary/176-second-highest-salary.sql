# Write your MySQL query statement below
/*select max(salary) as SecondHighestSalary from Employee where salary <(select max(salary) from Employee);*/
/*select max(e2.salary) as SecondHighestSalary from Employee e1, Employee e2 where e1.salary>e2.salary;*/
SELECT 
    IFNULL(
      (SELECT DISTINCT Salary
       FROM Employee
       ORDER BY Salary DESC
        LIMIT 1 OFFSET 1),
    NULL) AS SecondHighestSalary