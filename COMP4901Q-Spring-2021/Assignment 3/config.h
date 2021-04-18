#ifndef RUNS
#define RUNS 10
#elif RUNS <= 0
#error "Number of runs should be a positive integer."
#endif

#ifndef PRINT_OUTPUT
#define PRINT_OUTPUT 0 // Off by default.
#endif

#ifndef PROBLEM
#define RUN_PROBLEM_1
#define RUN_PROBLEM_2
#elif PROBLEM == 1
#define RUN_PROBLEM_1
#elif PROBLEM == 2
#define RUN_PROBLEM_2
#elif PROBLEM == 12 || PROBLEM == 21
#define RUN_PROBLEM_1
#define RUN_PROBLEM_2
#endif

#define OUTPUT_ROW_LIMIT 50
#define OUTPUT_COL_LIMIT 20

#ifndef RANDOM_LO
#define RANDOM_LO 1.0
#endif

#ifndef RANDOM_HI
#define RANDOM_HI 10.0
#endif

#ifndef ENABLE_MPI
#define ENABLE_MPI 1 // Enable by default.
#endif

#define MASTER 0 // Master process.
