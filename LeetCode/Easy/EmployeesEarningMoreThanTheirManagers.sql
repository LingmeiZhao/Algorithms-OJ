# Write your MySQL query statement below
select Employee1.Name as Employee from Employee as Employee1, Employee as Employee2 
where Employee1.ManagerId = Employee2.Id and Employee1.Salary > Employee2.Salary
