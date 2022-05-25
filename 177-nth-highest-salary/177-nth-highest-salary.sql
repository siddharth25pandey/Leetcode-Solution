/*select ifnull(select distinct salary from Employee order by salary desc limit 1 offset n-1),null) as getNthHighestSalary(n);*/
   CREATE FUNCTION getNthHighestSalary(n INT) RETURNS INT
BEGIN
    DECLARE a INT;
SET a=n-1;
  RETURN (
select ifnull((
 select distinct salary
 from Employee
 order by salary desc
 limit 1 offset a),
 null)
  );
END