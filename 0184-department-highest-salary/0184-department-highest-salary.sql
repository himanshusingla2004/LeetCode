-- # Write your MySQL query statement below
SELECT D.name as Department, E.name as Employee, E.salary as Salary 
FROM Employee E JOIN Department D
ON E.departmentId = D.Id
WHERE E.salary = (
    SELECT MAX(E1.salary)
    FROM Employee E1
    WHERE E1.departmentId = E.departmentId
);

-- SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary
-- FROM Employee E
-- JOIN Department D ON E.departmentId = D.id
-- WHERE E.salary = (
--     SELECT MAX(E1.salary)
--     FROM Employee E1
--     WHERE E1.departmentId = E.departmentId
-- );
