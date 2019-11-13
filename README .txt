COMP 142 Programming Project 1, Hailstone

Name: Xinwei Li

Email Address: lixi-22@rhodes.edu

Please summarize the help you found useful for this assignment, which
may include office hours, discussion with peers, tutors, et cetera.
If none, say "none".

:disscussion with peer

================================ Questions ==================================

1. Which kind of a loop did you use for the first program? Why?

: While loop, because we don't know the user input so we can not control the times loop 
need to run. Thus, while loop can keep running until the condition is not achieved.

2a. Once you've completed the second program, run hailstats on the following
inputs, and record your results in the table below:

  input range  | minimum length | achieved by | maximum length | achieved by
-----------------------------------------------------------------------------
    50 100     |      6         |     64      |     118        |     97
   100 200     |     7          |    128      |      124       |     171
   200 400     |      8         |     256     |      143        |    327

2b. What pattern do you think there is in the values achieving minimum length?
Can you explain why it holds?

:Increase by one. Because all the numbers are even and each time's imput doubled. 
The step of divided number by 2 cause this one more step.

3a. Let X be the smallest integer whose length is greater than 150.
By running your hailstats program several times on carefully chosen inputs,
determine what is the value of X.

X is : 703

3b. Explain, briefly, the way in which you used your hailstats program
(i.e., which inputs you gave it) to find this answer.

:First, double input to 400, 800. Then using the final results 703 to test if
there are numbers smaller than 703 but have length greater than 150. Narrow the
interval of number to compare.

================================ Remarks ====================================

Filling in anything here is OPTIONAL.

Approximately how long did you spend on this assignment?

:2 hrs

Were there any specific problems you encountered? This is especially useful to
know if you turned it in incomplete.

:different variables to store value.

Do you have any other remarks?

:
