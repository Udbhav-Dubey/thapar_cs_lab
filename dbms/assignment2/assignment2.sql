DROP TABLE IF EXISTS emp;
CREATE TABLE emp (
    empno INTEGER,
    ename VARCHAR(50),
    job VARCHAR(30),
    salary INTEGER,
    commission INTEGER,
    deptno INTEGER
);
INSERT INTO emp
    (empno, ename, job, salary, commission, deptno)
VALUES
    (1,  'ABBA','SDE', 2400, NULL, 10),
    (2,  'BA',  'SWE', 2800, 500,  20),
    (3,  'ANNA','CLERK', 2200, NULL, 20),
    (4,  'BOB', 'SYSADM',3500, 800,  30),
    (5,  'SARA','SALESPERSON', 3000, 700, 30),
    (6,  'KAB', 'DEVOPS',2600, NULL, 10),
    (7,  'ABHI','SWE', 2100, 300,  20),
    (8,  'AMAYA','SDE',2900, NULL, 10),
    (9,  'DC','EMBEDDED',4200, 1000, 30),
    (10, 'RAH','CLERK',1800, NULL, 10),
    (11, 'ZARA','SWE', 2500, 450,  20),
    (12, 'AL','SDE', 3200, NULL, 30);



