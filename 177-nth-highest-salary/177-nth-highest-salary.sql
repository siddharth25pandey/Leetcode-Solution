/*select ifnull(select distinct salary from Employee order by salary desc limit 1 offset n-1),null) as getNthHighestSalary(n);*/
   create function getNthHighestSalary(n int) returns int
begin
    declare a int;
    set a=n-1;
  return (
select ifnull((
 select distinct salary
 from Employee
 order by salary desc
 limit 1 offset a),
 null)
  );
end