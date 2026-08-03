# Write your MySQL query statement below
select e.unique_id , emp.name
From Employees emp
Left join EmployeeUNI e on emp.id = e.id
