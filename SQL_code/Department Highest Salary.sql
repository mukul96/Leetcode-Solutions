# Write your MySQL query statement below
select department.name as Department,employee.name as Employee,salary as Salary from employee  join department on department.id=employee.departmentid  and 
(employee.departmentid ,salary) in (select departmentid,MAX(employee.salary) from employee group by employee.departmentid);
