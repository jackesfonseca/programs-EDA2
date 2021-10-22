% Running: edazinhodadominacao-dificil

- Minimal Information
  - Submission Language: c
  - Submission SRCFILE: Main.c
  - Run all even on critical error: yes


## LIMITS via ulimits

set: ulimit -u 10000
set: ulimit -s 204800
set: ulimit -f 256000


/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c: In function ‘main’:
/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c:75:15: warning: format ‘%ld’ expects argument of type ‘long int’, but argument 3 has type ‘int’ [-Wformat=]
   75 |           LOG("O limite de sondagens é de %ld, esta é a sondagem %ld no turno. GAME OVER\n",EDAZINHOSCOUNT,sondagenscount+1);
      |               ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ~~~~~~~~~~~~~~
      |                                                                                               |
      |                                                                                               int
/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c:13:40: note: in definition of macro ‘LOG’
   13 | #define LOG(f,args...) {fprintf(stderr,f,##args);}
      |                                        ^
/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c:75:46: note: format string is defined here
   75 |           LOG("O limite de sondagens é de %ld, esta é a sondagem %ld no turno. GAME OVER\n",EDAZINHOSCOUNT,sondagenscount+1);
      |                                            ~~^
      |                                              |
      |                                              long int
      |                                            %d
/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c:75:15: warning: format ‘%ld’ expects argument of type ‘long int’, but argument 4 has type ‘int’ [-Wformat=]
   75 |           LOG("O limite de sondagens é de %ld, esta é a sondagem %ld no turno. GAME OVER\n",EDAZINHOSCOUNT,sondagenscount+1);
      |               ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                ~~~~~~~~~~~~~~~~
      |                                                                                                                            |
      |                                                                                                                            int
/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c:13:40: note: in definition of macro ‘LOG’
   13 | #define LOG(f,args...) {fprintf(stderr,f,##args);}
      |                                        ^
/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c:75:70: note: format string is defined here
   75 |           LOG("O limite de sondagens é de %ld, esta é a sondagem %ld no turno. GAME OVER\n",EDAZINHOSCOUNT,sondagenscount+1);
      |                                                                    ~~^
      |                                                                      |
      |                                                                      long int
      |                                                                    %d
/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c:62:5: warning: ignoring return value of ‘scanf’, declared with attribute warn_unused_result [-Wunused-result]
   62 |     scanf("%100s",buf);
      |     ^~~~~~~~~~~~~~~~~~
/tmp/tmp.tWP6zBryPx/cagefiles//arbitro.c:119:7: warning: ignoring return value of ‘scanf’, declared with attribute warn_unused_result [-Wunused-result]
  119 |       scanf("%100s",buf);
      |       ^~~~~~~~~~~~~~~~~~
# Compiling code



# Running test files
 - NPROC: 4
--------------------------------------------------------------------

## Testfile: 001-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 001-example-stderr
Jogador terminou com RunTime Error
=== INICIANDO uma PARTIDA
Posição inicial: -5000000000 100000000
Ponto na posição inicial: 3
Turnos para esta partida: 1000

==== TURNO 0
Comando inválido ''. GAME OVER
#### 001-example-log.cage-run
Creating output file '/tmp/tmp.tWP6zBryPx/001-example-team_output'
#### 001-example-log.timelog
Command exited with non-zero status 1
real 0.03
user 0.00
sys 0.01
#### 001-example-log.bwraptime
Command exited with non-zero status 1
real 0.05
user 0.00
sys 0.00
#### 001-example-log.bwrapexitcode
1
8<-------------------------8<------------------
### END CAGE CONTROL DATA


 - Not checking answer because of TMT
EXECTIME 001-example 0.03 TMT
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.72
 - Veredict for this output: TMT


#### INPUT COURTESY [this is the raw input file]
```
-5000000000 100000000 3 1000 300
```


--------------------------------------------------------------------

## Testfile: 002-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 002-example-stderr
Jogador terminou com RunTime Error
=== INICIANDO uma PARTIDA
Posição inicial: 5000000000 -100000000
Ponto na posição inicial: 3
Turnos para esta partida: 1000

==== TURNO 0
Comando inválido ''. GAME OVER
#### 002-example-log.cage-run
Creating output file '/tmp/tmp.tWP6zBryPx/002-example-team_output'
#### 002-example-log.timelog
Command exited with non-zero status 1
real 0.02
user 0.01
sys 0.00
#### 002-example-log.bwraptime
Command exited with non-zero status 1
real 0.04
user 0.00
sys 0.00
#### 002-example-log.bwrapexitcode
1
8<-------------------------8<------------------
### END CAGE CONTROL DATA


 - Not checking answer because of TMT
EXECTIME 002-example 0.02 TMT
 - Execution Time: 0.02
 - Time Limit for this problem is: 1.72
 - Veredict for this output: TMT


#### INPUT COURTESY [this is the raw input file]
```
5000000000 -100000000 3 1000 310
```


--------------------------------------------------------------------

## Testfile: 003-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 003-example-stderr
Jogador terminou com RunTime Error
=== INICIANDO uma PARTIDA
Posição inicial: 4000000000 8000000000
Ponto na posição inicial: 1
Turnos para esta partida: 1000

==== TURNO 0
Comando inválido ''. GAME OVER
#### 003-example-log.cage-run
Creating output file '/tmp/tmp.tWP6zBryPx/003-example-team_output'
#### 003-example-log.timelog
Command exited with non-zero status 1
real 0.02
user 0.00
sys 0.01
#### 003-example-log.bwraptime
Command exited with non-zero status 1
real 0.04
user 0.00
sys 0.00
#### 003-example-log.bwrapexitcode
1
8<-------------------------8<------------------
### END CAGE CONTROL DATA


 - Not checking answer because of TMT
EXECTIME 003-example 0.02 TMT
 - Execution Time: 0.02
 - Time Limit for this problem is: 1.72
 - Veredict for this output: TMT

 - Will NOT show DIFFS or Courtesy for MORE than 2 errors

--------------------------------------------------------------------

## Testfile: 004-example


### CAGE CONTROL DATA this is for Bruno to check
8<-------------------------8<------------------
#### 004-example-stderr
Jogador terminou com RunTime Error
=== INICIANDO uma PARTIDA
Posição inicial: -4000000000 -8000000000
Ponto na posição inicial: 1
Turnos para esta partida: 1000

==== TURNO 0
Comando inválido ''. GAME OVER
#### 004-example-log.cage-run
Creating output file '/tmp/tmp.tWP6zBryPx/004-example-team_output'
#### 004-example-log.timelog
Command exited with non-zero status 1
real 0.03
user 0.01
sys 0.02
#### 004-example-log.bwraptime
Command exited with non-zero status 1
real 0.05
user 0.00
sys 0.00
#### 004-example-log.bwrapexitcode
1
8<-------------------------8<------------------
### END CAGE CONTROL DATA


 - Not checking answer because of TMT
EXECTIME 004-example 0.03 TMT
 - Execution Time: 0.03
 - Time Limit for this problem is: 1.72
 - Veredict for this output: TMT

 - Will NOT show DIFFS or Courtesy for MORE than 2 errors



# FINAL VEREDICT
  - Runtime Error - Signaled PPID
  - 0 correct in 4 , 0%
