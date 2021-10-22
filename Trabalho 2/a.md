% Running: edazinhodadominacao-simples

- Minimal Information
  - Submission Language: c
  - Submission SRCFILE: Main.c
  - Run all even on critical error: yes


## LIMITS via ulimits

set: ulimit -u 10000
set: ulimit -s 204800
set: ulimit -f 256000


# Compiling code



# Running test files
 - NPROC: 4
--------------------------------------------------------------------

## Testfile: 01-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 01-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 5 5
Ponto na posição inicial: 3
Turnos para esta partida: 2

==== TURNO 0
  PLAYER: sondar 6 6
  ARBITRO: sondagem 6 6 23640
==== TURNO 1
  PLAYER: dominar 6 6
  ARBITRO: dominacao 23640
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
Total de Edazinhos: 2
Pontuação acumulada: 23643
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4884
SCORE: 23603.00
#### 01-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/01-example-team_output'
#### 01-example-log.timelog
real 0.02
user 0.01
sys 0.00
#### 01-example-log.bwraptime
real 0.04
user 0.00
sys 0.00
#### 01-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 01-example 0.02 AC
 - Execution Time: 0.02
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 02-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 02-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 5 5
Ponto na posição inicial: 3
Turnos para esta partida: 3

==== TURNO 0
  PLAYER: sondar 6 6
  ARBITRO: sondagem 6 6 23640
==== TURNO 1
  PLAYER: dominar 6 6
  ARBITRO: dominacao 23640
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
==== TURNO 2
  PLAYER: dominar 6 5
  ARBITRO: dominacao 29956
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
Total de Edazinhos: 3
Pontuação acumulada: 53599
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4888
SCORE: 53559.00
#### 02-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/02-example-team_output'
#### 02-example-log.timelog
real 0.03
user 0.01
sys 0.00
#### 02-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 02-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 02-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 03-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 03-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 5 5
Ponto na posição inicial: 3
Turnos para esta partida: 4

==== TURNO 0
  PLAYER: sondar 6 6
  ARBITRO: sondagem 6 6 23640
==== TURNO 1
  PLAYER: dominar 6 6
  ARBITRO: dominacao 23640
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
==== TURNO 2
  PLAYER: dominar 6 5
  ARBITRO: dominacao 29956
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
==== TURNO 3
  PLAYER: dominar 7 7
  ARBITRO: dominacao 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
Total de Edazinhos: 4
Pontuação acumulada: 88673
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4892
SCORE: 88633.00
#### 03-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/03-example-team_output'
#### 03-example-log.timelog
real 0.03
user 0.02
sys 0.00
#### 03-example-log.bwraptime
real 0.04
user 0.00
sys 0.00
#### 03-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 03-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 04-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 04-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 5 5
Ponto na posição inicial: 3
Turnos para esta partida: 5

==== TURNO 0
  PLAYER: sondar 6 6
  ARBITRO: sondagem 6 6 23640
==== TURNO 1
  PLAYER: dominar 6 6
  ARBITRO: dominacao 23640
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
==== TURNO 2
  PLAYER: dominar 6 5
  ARBITRO: dominacao 29956
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
==== TURNO 3
  PLAYER: dominar 7 7
  ARBITRO: dominacao 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
==== TURNO 4
  PLAYER: dominar 7 4
  ARBITRO: dominacao 9368
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 8 6
  ARBITRO: sondagem 8 6 31879
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
Total de Edazinhos: 5
Pontuação acumulada: 98041
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4892
SCORE: 98001.00
#### 04-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/04-example-team_output'
#### 04-example-log.timelog
real 0.02
user 0.02
sys 0.00
#### 04-example-log.bwraptime
real 0.04
user 0.00
sys 0.00
#### 04-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 04-example 0.02 AC
 - Execution Time: 0.02
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 05-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 05-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 5 5
Ponto na posição inicial: 3
Turnos para esta partida: 6

==== TURNO 0
  PLAYER: sondar 6 6
  ARBITRO: sondagem 6 6 23640
==== TURNO 1
  PLAYER: dominar 6 6
  ARBITRO: dominacao 23640
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
==== TURNO 2
  PLAYER: dominar 6 5
  ARBITRO: dominacao 29956
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
==== TURNO 3
  PLAYER: dominar 7 7
  ARBITRO: dominacao 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
==== TURNO 4
  PLAYER: dominar 7 4
  ARBITRO: dominacao 9368
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 8 6
  ARBITRO: sondagem 8 6 31879
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
==== TURNO 5
  PLAYER: dominar 7 8
  ARBITRO: dominacao 24033
  PLAYER: sondar 8 5
  ARBITRO: sondagem 8 5 29016
  PLAYER: sondar 8 4
  ARBITRO: sondagem 8 4 21331
  PLAYER: sondar 8 3
  ARBITRO: sondagem 8 3 61591
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
Total de Edazinhos: 6
Pontuação acumulada: 122074
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4888
SCORE: 122034.00
#### 05-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/05-example-team_output'
#### 05-example-log.timelog
real 0.03
user 0.01
sys 0.01
#### 05-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 05-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 05-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 06-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 06-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 5 5
Ponto na posição inicial: 3
Turnos para esta partida: 7

==== TURNO 0
  PLAYER: sondar 6 6
  ARBITRO: sondagem 6 6 23640
==== TURNO 1
  PLAYER: dominar 6 6
  ARBITRO: dominacao 23640
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
==== TURNO 2
  PLAYER: dominar 6 5
  ARBITRO: dominacao 29956
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
==== TURNO 3
  PLAYER: dominar 7 7
  ARBITRO: dominacao 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
==== TURNO 4
  PLAYER: dominar 7 4
  ARBITRO: dominacao 9368
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 8 6
  ARBITRO: sondagem 8 6 31879
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
==== TURNO 5
  PLAYER: dominar 7 8
  ARBITRO: dominacao 24033
  PLAYER: sondar 8 5
  ARBITRO: sondagem 8 5 29016
  PLAYER: sondar 8 4
  ARBITRO: sondagem 8 4 21331
  PLAYER: sondar 8 3
  ARBITRO: sondagem 8 3 61591
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
==== TURNO 6
  PLAYER: dominar 7 4
  ARBITRO: dominacao 9368
  PLAYER: sondar 8 9
  ARBITRO: sondagem 8 9 29962
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 7 9
  ARBITRO: sondagem 7 9 47784
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
Total de Edazinhos: 7
Pontuação acumulada: 131442
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4888
SCORE: 131402.00
#### 06-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/06-example-team_output'
#### 06-example-log.timelog
real 0.04
user 0.01
sys 0.00
#### 06-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 06-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 06-example 0.04 AC
 - Execution Time: 0.04
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 07-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 07-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 5 5
Ponto na posição inicial: 3
Turnos para esta partida: 8

==== TURNO 0
  PLAYER: sondar 6 6
  ARBITRO: sondagem 6 6 23640
==== TURNO 1
  PLAYER: dominar 6 6
  ARBITRO: dominacao 23640
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
==== TURNO 2
  PLAYER: dominar 6 5
  ARBITRO: dominacao 29956
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
==== TURNO 3
  PLAYER: dominar 7 7
  ARBITRO: dominacao 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
==== TURNO 4
  PLAYER: dominar 7 4
  ARBITRO: dominacao 9368
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 8 6
  ARBITRO: sondagem 8 6 31879
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
==== TURNO 5
  PLAYER: dominar 7 8
  ARBITRO: dominacao 24033
  PLAYER: sondar 8 5
  ARBITRO: sondagem 8 5 29016
  PLAYER: sondar 8 4
  ARBITRO: sondagem 8 4 21331
  PLAYER: sondar 8 3
  ARBITRO: sondagem 8 3 61591
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
==== TURNO 6
  PLAYER: dominar 7 4
  ARBITRO: dominacao 9368
  PLAYER: sondar 8 9
  ARBITRO: sondagem 8 9 29962
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 7 9
  ARBITRO: sondagem 7 9 47784
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
==== TURNO 7
  PLAYER: dominar 8 8
  ARBITRO: dominacao 395
  PLAYER: sondar 8 5
  ARBITRO: sondagem 8 5 29016
  PLAYER: sondar 8 4
  ARBITRO: sondagem 8 4 21331
  PLAYER: sondar 8 3
  ARBITRO: sondagem 8 3 61591
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
  PLAYER: sondar 7 3
  ARBITRO: sondagem 7 3 36895
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
Total de Edazinhos: 8
Pontuação acumulada: 131837
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4884
SCORE: 131797.00
#### 07-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/07-example-team_output'
#### 07-example-log.timelog
real 0.03
user 0.01
sys 0.00
#### 07-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 07-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 07-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 08-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 08-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 5 5
Ponto na posição inicial: 3
Turnos para esta partida: 9

==== TURNO 0
  PLAYER: sondar 6 6
  ARBITRO: sondagem 6 6 23640
==== TURNO 1
  PLAYER: dominar 6 6
  ARBITRO: dominacao 23640
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
==== TURNO 2
  PLAYER: dominar 6 5
  ARBITRO: dominacao 29956
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
==== TURNO 3
  PLAYER: dominar 7 7
  ARBITRO: dominacao 35074
  PLAYER: sondar 7 6
  ARBITRO: sondagem 7 6 35721
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
==== TURNO 4
  PLAYER: dominar 7 4
  ARBITRO: dominacao 9368
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 8 6
  ARBITRO: sondagem 8 6 31879
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
==== TURNO 5
  PLAYER: dominar 7 8
  ARBITRO: dominacao 24033
  PLAYER: sondar 8 5
  ARBITRO: sondagem 8 5 29016
  PLAYER: sondar 8 4
  ARBITRO: sondagem 8 4 21331
  PLAYER: sondar 8 3
  ARBITRO: sondagem 8 3 61591
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
==== TURNO 6
  PLAYER: dominar 7 4
  ARBITRO: dominacao 9368
  PLAYER: sondar 8 9
  ARBITRO: sondagem 8 9 29962
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 7 9
  ARBITRO: sondagem 7 9 47784
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
  PLAYER: sondar 7 7
  ARBITRO: sondagem 7 7 35074
==== TURNO 7
  PLAYER: dominar 8 8
  ARBITRO: dominacao 395
  PLAYER: sondar 8 5
  ARBITRO: sondagem 8 5 29016
  PLAYER: sondar 8 4
  ARBITRO: sondagem 8 4 21331
  PLAYER: sondar 8 3
  ARBITRO: sondagem 8 3 61591
  PLAYER: sondar 7 5
  ARBITRO: sondagem 7 5 48113
  PLAYER: sondar 7 4
  ARBITRO: sondagem 7 4 9368
  PLAYER: sondar 7 3
  ARBITRO: sondagem 7 3 36895
  PLAYER: sondar 6 5
  ARBITRO: sondagem 6 5 29956
==== TURNO 8
  PLAYER: dominar 8 7
  ARBITRO: dominacao 10838
  PLAYER: sondar 9 9
  ARBITRO: sondagem 9 9 50361
  PLAYER: sondar 9 8
  ARBITRO: sondagem 9 8 36175
  PLAYER: sondar 9 7
  ARBITRO: sondagem 9 7 5985
  PLAYER: sondar 8 9
  ARBITRO: sondagem 8 9 29962
  PLAYER: sondar 8 8
  ARBITRO: sondagem 8 8 395
  PLAYER: sondar 8 7
  ARBITRO: sondagem 8 7 10838
  PLAYER: sondar 7 9
  ARBITRO: sondagem 7 9 47784
  PLAYER: sondar 7 8
  ARBITRO: sondagem 7 8 24033
Total de Edazinhos: 9
Pontuação acumulada: 142675
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4884
SCORE: 142635.00
#### 08-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/08-example-team_output'
#### 08-example-log.timelog
real 0.03
user 0.02
sys 0.00
#### 08-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 08-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 08-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 09-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 09-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 10

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
Total de Edazinhos: 10
Pontuação acumulada: 166708
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4912
SCORE: 166668.00
#### 09-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/09-example-team_output'
#### 09-example-log.timelog
real 0.03
user 0.01
sys 0.01
#### 09-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 09-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 09-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 10-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 10-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 11

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
Total de Edazinhos: 11
Pontuação acumulada: 201782
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4912
SCORE: 201742.00
#### 10-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/10-example-team_output'
#### 10-example-log.timelog
real 0.03
user 0.01
sys 0.00
#### 10-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 10-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 10-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 11-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 11-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 12

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 11
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
Total de Edazinhos: 12
Pontuação acumulada: 225815
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4912
SCORE: 225775.00
#### 11-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/11-example-team_output'
#### 11-example-log.timelog
real 0.03
user 0.01
sys 0.00
#### 11-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 11-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 11-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 12-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 12-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 13

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 11
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 12
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
Total de Edazinhos: 13
Pontuação acumulada: 226210
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4908
SCORE: 226170.00
#### 12-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/12-example-team_output'
#### 12-example-log.timelog
real 0.03
user 0.01
sys 0.01
#### 12-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 12-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 12-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 13-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 13-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 14

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 11
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 12
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
==== TURNO 13
  PLAYER: dominar 101 203
  ARBITRO: dominacao 30844
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
Total de Edazinhos: 14
Pontuação acumulada: 257054
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4916
SCORE: 257014.00
#### 13-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/13-example-team_output'
#### 13-example-log.timelog
real 0.03
user 0.02
sys 0.00
#### 13-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 13-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 13-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 14-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 14-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 15

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 11
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 12
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
==== TURNO 13
  PLAYER: dominar 101 203
  ARBITRO: dominacao 30844
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 14
  PLAYER: dominar 102 198
  ARBITRO: dominacao 36895
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 100 204
  ARBITRO: sondagem 100 204 50086
  PLAYER: sondar 100 203
  ARBITRO: sondagem 100 203 12953
  PLAYER: sondar 100 202
  ARBITRO: sondagem 100 202 24314
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
Total de Edazinhos: 15
Pontuação acumulada: 293949
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4916
SCORE: 293909.00
#### 14-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/14-example-team_output'
#### 14-example-log.timelog
real 0.03
user 0.01
sys 0.01
#### 14-example-log.bwraptime
real 0.05
user 0.00
sys 0.00
#### 14-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 14-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 15-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 15-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 16

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 11
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 12
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
==== TURNO 13
  PLAYER: dominar 101 203
  ARBITRO: dominacao 30844
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 14
  PLAYER: dominar 102 198
  ARBITRO: dominacao 36895
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 100 204
  ARBITRO: sondagem 100 204 50086
  PLAYER: sondar 100 203
  ARBITRO: sondagem 100 203 12953
  PLAYER: sondar 100 202
  ARBITRO: sondagem 100 202 24314
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 15
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 103 197
  ARBITRO: sondagem 103 197 8389
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 102 197
  ARBITRO: sondagem 102 197 12314
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
  PLAYER: sondar 101 197
  ARBITRO: sondagem 101 197 40532
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
  PLAYER: sondar 100 199
  ARBITRO: sondagem 100 199 20871
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
Total de Edazinhos: 16
Pontuação acumulada: 294344
Tempo do jogador (segundos): 0.00
Memória do jogador(KB): 4916
SCORE: 294304.00
#### 15-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/15-example-team_output'
#### 15-example-log.timelog
real 0.03
user 0.02
sys 0.00
#### 15-example-log.bwraptime
real 0.04
user 0.00
sys 0.00
#### 15-example-log.bwrapexitcode
0
8<-------------------------8<------------------
### END CAGE CONTROL DATA


### CHECKING SOLUTION THIS IS USUALLY A DIFF OUTPUT
EXECTIME 15-example 0.03 AC
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.52
 - Veredict for this output: AC


--------------------------------------------------------------------

## Testfile: 16-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 16-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 17

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 11
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 12
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
==== TURNO 13
  PLAYER: dominar 101 203
  ARBITRO: dominacao 30844
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 14
  PLAYER: dominar 102 198
  ARBITRO: dominacao 36895
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 100 204
  ARBITRO: sondagem 100 204 50086
  PLAYER: sondar 100 203
  ARBITRO: sondagem 100 203 12953
  PLAYER: sondar 100 202
  ARBITRO: sondagem 100 202 24314
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 15
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 103 197
  ARBITRO: sondagem 103 197 8389
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 102 197
  ARBITRO: sondagem 102 197 12314
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
  PLAYER: sondar 101 197
  ARBITRO: sondagem 101 197 40532
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
  PLAYER: sondar 100 199
  ARBITRO: sondagem 100 199 20871
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
==== TURNO 16
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 100 202
  ARBITRO: sondagem 100 202 24314
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
Total de Edazinhos: 17
Pontuação acumulada: 305182
JOGADOR terminou com RunTime Error
#### 16-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/16-example-team_output'
#### 16-example-log.timelog
Command exited with non-zero status 1
real 0.01
user 0.01
sys 0.00
#### 16-example-log.bwraptime
Command exited with non-zero status 1
real 0.03
user 0.00
sys 0.00
#### 16-example-log.bwrapexitcode
1
8<-------------------------8<------------------
### END CAGE CONTROL DATA


 - Not checking answer because of TMT
EXECTIME 16-example 0.01 TMT
 - Execution Time: 0.01
 - Time Limit for this problem is: 1.52
 - Veredict for this output: TMT


#### INPUT COURTESY [this is the raw input file]
```
100 200 3 17 300 3
```


--------------------------------------------------------------------

## Testfile: 17-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 17-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 18

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 11
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 12
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
==== TURNO 13
  PLAYER: dominar 101 203
  ARBITRO: dominacao 30844
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 14
  PLAYER: dominar 102 198
  ARBITRO: dominacao 36895
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 100 204
  ARBITRO: sondagem 100 204 50086
  PLAYER: sondar 100 203
  ARBITRO: sondagem 100 203 12953
  PLAYER: sondar 100 202
  ARBITRO: sondagem 100 202 24314
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 15
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 103 197
  ARBITRO: sondagem 103 197 8389
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 102 197
  ARBITRO: sondagem 102 197 12314
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
  PLAYER: sondar 101 197
  ARBITRO: sondagem 101 197 40532
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
  PLAYER: sondar 100 199
  ARBITRO: sondagem 100 199 20871
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
==== TURNO 16
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 100 202
  ARBITRO: sondagem 100 202 24314
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
==== TURNO 17
Total de Edazinhos: 17
Pontuação acumulada: 305182
JOGADOR terminou com RunTime Error
#### 17-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/17-example-team_output'
#### 17-example-log.timelog
Command exited with non-zero status 1
real 0.01
user 0.01
sys 0.00
#### 17-example-log.bwraptime
Command exited with non-zero status 1
real 0.02
user 0.00
sys 0.00
#### 17-example-log.bwrapexitcode
1
8<-------------------------8<------------------
### END CAGE CONTROL DATA


 - Not checking answer because of TMT
EXECTIME 17-example 0.01 TMT
 - Execution Time: 0.01
 - Time Limit for this problem is: 1.52
 - Veredict for this output: TMT


#### INPUT COURTESY [this is the raw input file]
```
100 200 3 18 300 3
```


--------------------------------------------------------------------

## Testfile: 18-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 18-example-stderr
=== INICIANDO uma PARTIDA
Posição inicial: 100 200
Ponto na posição inicial: 3
Turnos para esta partida: 19

==== TURNO 0
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 1
  PLAYER: dominar 101 201
  ARBITRO: dominacao 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 2
  PLAYER: dominar 101 200
  ARBITRO: dominacao 29956
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 3
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 4
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 5
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
==== TURNO 6
  PLAYER: dominar 102 199
  ARBITRO: dominacao 9368
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 7
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 200
  ARBITRO: sondagem 103 200 29016
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
==== TURNO 8
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
==== TURNO 9
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 104 201
  ARBITRO: sondagem 104 201 1460
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
==== TURNO 10
  PLAYER: dominar 102 202
  ARBITRO: dominacao 35074
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
==== TURNO 11
  PLAYER: dominar 102 203
  ARBITRO: dominacao 24033
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 103 201
  ARBITRO: sondagem 103 201 31879
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 12
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
==== TURNO 13
  PLAYER: dominar 101 203
  ARBITRO: dominacao 30844
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
==== TURNO 14
  PLAYER: dominar 102 198
  ARBITRO: dominacao 36895
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 204
  ARBITRO: sondagem 101 204 58947
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 100 204
  ARBITRO: sondagem 100 204 50086
  PLAYER: sondar 100 203
  ARBITRO: sondagem 100 203 12953
  PLAYER: sondar 100 202
  ARBITRO: sondagem 100 202 24314
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 102 201
  ARBITRO: sondagem 102 201 35721
  PLAYER: sondar 101 203
  ARBITRO: sondagem 101 203 30844
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
==== TURNO 15
  PLAYER: dominar 103 203
  ARBITRO: dominacao 395
  PLAYER: sondar 103 199
  ARBITRO: sondagem 103 199 21331
  PLAYER: sondar 103 198
  ARBITRO: sondagem 103 198 61591
  PLAYER: sondar 103 197
  ARBITRO: sondagem 103 197 8389
  PLAYER: sondar 102 199
  ARBITRO: sondagem 102 199 9368
  PLAYER: sondar 102 198
  ARBITRO: sondagem 102 198 36895
  PLAYER: sondar 102 197
  ARBITRO: sondagem 102 197 12314
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 101 198
  ARBITRO: sondagem 101 198 54160
  PLAYER: sondar 101 197
  ARBITRO: sondagem 101 197 40532
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
  PLAYER: sondar 100 199
  ARBITRO: sondagem 100 199 20871
  PLAYER: sondar 102 200
  ARBITRO: sondagem 102 200 48113
==== TURNO 16
  PLAYER: dominar 103 202
  ARBITRO: dominacao 10838
  PLAYER: sondar 104 204
  ARBITRO: sondagem 104 204 50361
  PLAYER: sondar 104 203
  ARBITRO: sondagem 104 203 36175
  PLAYER: sondar 104 202
  ARBITRO: sondagem 104 202 5985
  PLAYER: sondar 103 204
  ARBITRO: sondagem 103 204 29962
  PLAYER: sondar 103 203
  ARBITRO: sondagem 103 203 395
  PLAYER: sondar 103 202
  ARBITRO: sondagem 103 202 10838
  PLAYER: sondar 102 204
  ARBITRO: sondagem 102 204 47784
  PLAYER: sondar 102 203
  ARBITRO: sondagem 102 203 24033
  PLAYER: sondar 102 202
  ARBITRO: sondagem 102 202 35074
  PLAYER: sondar 101 202
  ARBITRO: sondagem 101 202 47638
  PLAYER: sondar 101 201
  ARBITRO: sondagem 101 201 23640
  PLAYER: sondar 101 200
  ARBITRO: sondagem 101 200 29956
  PLAYER: sondar 100 202
  ARBITRO: sondagem 100 202 24314
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
  PLAYER: sondar 101 199
  ARBITRO: sondagem 101 199 52823
  PLAYER: sondar 100 201
  ARBITRO: sondagem 100 201 35288
==== TURNO 17
==== TURNO 18
Total de Edazinhos: 17
Pontuação acumulada: 305182
JOGADOR terminou com RunTime Error
#### 18-example-log.cage-run
Creating output file '/tmp/tmp.W8BorFqWHI/18-example-team_output'
#### 18-example-log.timelog
Command exited with non-zero status 1
real 0.01
user 0.00
sys 0.00
#### 18-example-log.bwraptime
Command exited with non-zero status 1
real 0.02
user 0.00
sys 0.00
#### 18-example-log.bwrapexitcode
1
8<-------------------------8<------------------
### END CAGE CONTROL DATA


 - Not checking answer because of TMT
EXECTIME 18-example 0.01 TMT
 - Execution Time: 0.01
 - Time Limit for this problem is: 1.52
 - Veredict for this output: TMT

 - Will NOT show DIFFS or Courtesy for MORE than 2 errors



# FINAL VEREDICT
  - Runtime Error - Signaled PPID
  - 15 correct in 18 , 83%
