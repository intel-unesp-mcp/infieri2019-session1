<a name="top"></a>

# 5th International Summer School on INtelligent signal processing for FrontIEr Research and Industry

## Lab Workbook - Session 1

**April 2019**

UNESP Center for Scientific Computing (an Intel Modern Code Partner)  
São Paulo State University (Universidade Estadual Paulista - UNESP)

São Paulo, Brazil

**Organized by: Rogério Iope, Jefferson Fialho, Raphael Cóbe, Silvio Stanzani**

______

## Overview

Intel® Xeon Phi™ is a brand name for all Intel Many Integrated Core (MIC)
architecture of processors and coprocessors developed by Intel to enable
performance gains for highly parallel computing workloads. Intel MIC
architecture combines many Intel processor cores onto a single chip and
provides interesting and appealing features, including the ability to use
familiar programming models such as OpenMP and MPI in much the same manner that
they are used on multi-core / multi-socket systems, like the widely used Intel
Xeon processors.

This hands-on training has been designed to be a comprehensive, practical
introduction to parallel programming based on the Xeon Phi architecture and
programming models, aiming to demonstrate the processing power of the Intel
Xeon Phi product family. Attendants of these training activities will start
issuing simple command-line tools to get basic information about the second-generation
Intel Xeon Phi processors, by connecting to the servers using the ssh protocol.
They will verify that the second-generation Intel Xeon Phi processor is a
self-booting processor capable of running a usual Linux-based operating system.

During this introductory part, participants will learn how to compile and
run simple C/C++ applications, and then compile and run example codes based on
shared-memory parallelism with OpenMP and Cilk Plus and distributed-memory
parallelism with MPI. They will also work on MPI application examples that
should be executed simultaneously on distinct servers with Xeon Phi processors,
explore the use of Intel MKL library, and develop insights on tuning parallel applications.

Participants will have access to a set of dedicated servers equipped
with Intel Xeon Phi processors running a usual Linux-based operating system, as well as the
latest Intel software development tools. The servers are hosted at
the Center for Scientific Computing of the São Paulo State University (UNESP), in
São Paulo, Brazil. The step-by-step hands-on activities have been planned to provide easy to
follow instructions in order to allow the participants to have a real experience on using
a powerful manycore computing system.

## Learning Goals

Attendants of these hands-on labs will work on predefined sets of exercises
that progressively help them get familiar with the Intel Xeon Phi processor
hardware, programming models, and development tools. Exercises have been
developed in such a way that the learners proceed from one topic to the next at
their own speed. Participants will start issuing simple commands to get basic
information about the Intel Xeon Phi processors, then will learn how to compile
and run simple C/C++ applications, including example codes based on shared-memory
parallelism with OpenMP and distributed-memory parallelism with MPI.
They will also work on MPI application examples that should be executed
simultaneously on distinct servers also based on Xeon Phi processors,
explore the use of the Intel Math Kernel Library (MKL), and develop insights
on tuning parallel applications.

## Before you start

Please read carefully the introduction and the first section - 'KNL Architecture Overview' - of the
paper referenced below, which provides a summary of the essential features of the second-generation
Intel Xeon Phi processor.

Sodani, Avinash et. al., *Knights Landing: Second-Generation Intel Xeon Phi Product*.
IEEE Micro. 36. 34-46. 10.1109/MM.2016.25.

Abstract: "This article describes the architecture of Knights Landing, the second-generation
Intel Xeon Phi product family, which targets high-performance computing and other
highly parallel workloads. It provides a significant increase in scalar and vector
performance and a big boost in memory bandwidth compared to the prior generation,
called Knights Corner. Knights Landing is a self-booting, standard CPU that is
completely binary compatible with prior Intel Xeon processors and is capable of
running all legacy workloads unmodified. Its innovations include a core optimized
for power efficiency, a 512-bit vector instruction set, a memory architecture
comprising two types of memory for high bandwidth and large capacity, a high-bandwidth
on-die interconnect, and an integrated on-package network fabric. These features enable
the Knights Landing processor to provide significant performance improvement for
computationally intensive and bandwidth-bound workloads while still providing good
performance on unoptimized legacy workloads, without requiring any special way of
programming other than the standard CPU programming model."
______

## Navigation

This course is divided into four parts:

* [Practical Exercises - **Part 1**: Introduction to the Intel® Xeon Phi™ coprocessor](#part1)
* [Practical Exercices - **Part 2**: Compiling and running trivially simple applications](#part2)
* [Practical Exercices - **Part 3**: Getting started on KNL - Cornell Virtual Workshop Training](#part3)
* [Practical Exercices - **Part 4**: Running a basic N-body simulation](#part4)

______

## Useful References

-   _Intel® Xeon Phi™ Processor High Performance Programming - Knights Landing Edition (2016)_  
    <https://www.elsevier.com/books/intel-xeon-phi-processor-high-performance-programming/jeffers/978-0-12-809194-4/>

-   _High Performance Parallelism Pearls - Vol. I (2014)_  
    <https://www.elsevier.com/books/high-performance-parallelism-pearls-volume-one/reinders/978-0-12-802118-7/>

-   _High Performance Parallelism Pearls - Vol. II (2015)_  
    <https://www.elsevier.com/books/high-performance-parallelism-pearls-volume-two/jeffers/978-0-12-803819-2/>
    
-   _Books on Programming Multicore and Many-core by James Reinders and Jim Jeffers_  
    <http://www.lotsofcores.com/>
    
-   _Knights Landing - An Overview for Developers (webinar)_  
    <https://software.intel.com/en-us/videos/knights-landing-an-overview-for-developers/>
    
-   _Best Practice Guide - Knights Landing (2017)_  
    http://www.prace-ri.eu/IMG/pdf/Best-Practice-Guide-Knights-Landing.pdf/>    
    
-   _Get Ready for Intel’s Knights Landing (KNL) – 3 papers: AVX-512, Clustering Modes, MCDRAM_  
    https://colfaxresearch.com/get-ready-for-intel-knights-landing-3-papers/>        
    
-   _Parallel Programming and Optimization with Intel® Xeon Phi™ Coprocessors, 2nd Edition (Colfax, 2015)_  
    <https://colfaxresearch.com/second-edition-of-parallel-programming-and-optimization-with-intel-xeon-phi-coprocessors/>
    
-   _Intel® C++ Compiler 19.0 Developer Guide and Reference_  
    <https://software.intel.com/en-us/cpp-compiler-developer-guide-and-reference>

-   _Intel® Xeon Phi™ x200 Product Family_  
    <https://ark.intel.com/content/www/us/en/ark/products/series/92650/intel-xeon-phi-x200-product-family.html>

## Remote access to the testing platform

This document assumes that the testing platforms have been setup and are
ready to use. We will use a total of six servers, each with one second-generation
Intel Xeon Phi processor (68 cores, 4 threads/core), as well
as several Intel software development tools. To simplify nomenclature,
we will refer to each server as “the host” (or “the host
system”).

Participants should work alone on a workstation (desktop PC or laptop) - preferably
running Linux or Mac - with Internet access. All the exercises are
command-line based and should be executed on the host system by means of
a secure shell (SSH) connection. Ideally, the participant workstation
should be able to open X11 connections with the server.

<a name="remote_access"></a>

Use the following command to log in to the host system:

```bash
$ ssh –X KNL-SERVER –l traineeN 
```

**(N is a number assigned to each participant)**

**Note:** ssh -X allows you to log into a remote computer and have its graphical user interface X displayed on your local machine.

Please refer to the teaching assistant(s) for more details.

<a name="get_repo"></a>

## GIT repository - getting the source files

**Git** is a free and open source distributed version control system (DVCS)
designed to track changes in source files or other content and coordinate work
on them among multiple people with flexibility, security, and efficiency.

**GitHub** is a web-based Git repository hosting service.

The files used during these activities are stored at GitHub and in order to
obtain them, you have to perform a copy (clone) of the remote repository to
your user directory, in order to do so, you should run the following command in
the host system console:

```bash
$ git clone https://github.com/intel-unesp-mcp/infieri-2017-basic.git
```

The source files will be available at the `infieri-2017-basic/src` directory.

From now on, the full path for these files will be referred as **SOURCE-DIR**.

Please refer to the teaching assistant(s) for more details.

## Intel's environment variables

After you connect to the remote server, set the environment variables necessary
for the Intel development tools by running the following commands:


```bash
[KNL-SERVER]$ source /opt/tools/intel/parallel_studio_xe_2018/psxevars.sh intel64
```

```bash
[KNL-SERVER]$ source /opt/tools/intel/parallel_studio_xe_2018/compilers_and_libraries_2018/linux/mpi/intel64/bin/mpivars.sh
```

______

### Quick Navigation ###

[Top](#top "Top of the page") | [Part 1](#part1 "Introduction to the Intel® Xeon Phi™ coprocessor") | [Part 2](#part2 "Compiling and running trivially simple applications") | [Part 3](#part3 "High Performance Test-Drive") | [Part 4](#part4 "Running a basic N-body simulation") | [Bottom](#bottom "Bottom of the page")

______

<a name="part1"></a>

# Practical Exercises - Part 1 #

## Introduction to the Intel® Xeon Phi™ KNL processor ##

### 1.1 Goals ###

Activities start with a brief overview of the Xeon Phi processor
hardware and software architecture, followed by a series of practical
exercises. The exercises will show you some of the tools available for
getting information about the Intel Xeon Phi processors and monitor
how their internal resources are being used. You will have an
introductory contact with the essential tools and configuration options
for managing the coprocessor operating environment.

### 1.2 Knights Landing: the Second Generation of Xeon Phi™ Architecture

Knights Landing (KNL) is the code name of the second generation of Intel Xeon
Phi architecture, which has been released in early 2016. The new model offers
additional support for vector processing, power efficient scaling and local
memory bandwidth. The novelties of Intel KNL are the following:

-	Increase in the number of cores: distinct KNL models have 64, 68 or 72 cores;
-	Improvement on the size of the Vector Processing Units (VPU): each core provides two units of 512 bits;
-	Improvements on the vector instruction set: KNL provides support to a new instruction set known as AVX-512, that offers new functionalities for vectorization but is fully compatible with previous versions;
-	KNL is available both as a processor or as a coprocessor, maintaining compatibility with applications compiled for the Intel Xeon;
-	An Integrated on-package High-bandwidth memory (HBM) with 16 GB based on the multi-channel dynamic random access memory (MCDRAM), that complements DDR4.

Each core of the KNL architecture has two 512-bit VPUs, L1 cache and is capable
of executing four threads. Cores are organized in tiles, each one consisting of
two cores that share a single L2 cache. Tiles are interconnected by a
cache-coherent two-dimensional mesh network. Its interconnection enforces that
every message travels to the destination first vertically, until it hits the
target row, then travels horizontally until it reaches the destination.  Such
interconnection is specifically optimized for KNL traffic flows.  KNL has two
types of memory, known as DDR4 SDRAM (double data rate fourth-generation
synchronous dynamic random-access memory) and HBM (High-Bandwidth Memory) or MCDRAM.
The maximum capacity for DDR4 is 384 GB and the size of MCDRAM is 16 GB. The
high-bandwidth memory can be used as a Last-level cache (LLC) or as a regular
addressable memory. KNL allows three modes of configuration:

* **Flat:** MCDRAM is treated as a standard memory in same address space of DDR4;
* **Cache:** MCDRAM is used as an Last-level cache (L3) for DDR4;
* **Hybrid:** a fraction of MCDRAM is set up as cache and the remaining as flat.

The memory in KNL can be organized in two forms: Uniform Memory Access (UMA),
in which the latency from one core to any memory location will vary little
across the mesh, or Non-Uniform Memory Access (NUMA), in which memory and cores
are divided into two or four sections; in this second case the latency from
core to memory in the same region is lower than the latency from core to memory
in other regions. KNL provides five cluster modes:  

#### • UMA
- **All-to-all:** memory addresses are uniformly distributed across the chip;  
- **Quadrant:** memory addresses are divided in four sections;  
- **Hemisphere:** memory addresses are divided in two sections.   

#### • NUMA
- **SNC-2:** (Sub-NUMA Cluster 2) tiles are divided in two NUMA nodes;  
- **SNC-4:** (Sub-NUMA Cluster 4) tiles are divided in four NUMA nodes.

Regardless of the cluster mode selected, all memory (MCDRAM and DDR4) is available
to all cores, and all memory is fully cache-coherent. What differs between the modes
is whether the view of MCDRAM or DDR4 is **UMA** or **NUMA**.

### 1.3 Hands-on Activities ###

**1.3.1** On your workstation (desktop/laptop), open a terminal or command line
console and use the command `ssh` to login to the host `SERVER`
as user traineeN (N = 01 … 30; please check with the teaching assistant
which number has been assigned to you):

```bash
$ ssh –X traineeN@SERVER
```

**1.3.2** The utility `lscpu` shows information about the CPU architecture. 
Use this utility to obtain the processor model, the amount of cores and the number of threads per
core available on the Intel KNL processor installed in the system:

```bash
[SERVER]$ lscpu
```

**1.3.3** In highly parallel processors such as the KNL, parallelism can be explored at least in three levels: data
parallelism with vector instructions (vectorization), task parallelism within a single server with multiple threads
(e.g. OpenMP), and process parallelism in distributed servers with message passing (e.g. MPI). Data parallelism
comes from support for **vector instructions**, which make every core of the processor a single instruction multiple
data (SIMD) processor. The 1st generation Intel Xeon Phi processors, released in 2013 and code-named Knights Corner
(KNC), were first Intel architecture processors to support 512-bit vectors. The 2nd generation Intel Xeon Phi
processors, released in 2016 and code-named Knights Landing (KNL), also support 512-bit vectors, but in a new
instruction set called Intel Advanced Vector Extensions 512 (Intel AVX-512).

Let us run again the utility `lscpu` to obtain the AVX512 instructions available for the KNL processor we are using.
We are going to use the Linux `pipe`and `grep` commands. The pipe command allows us to use two or more commands
such that output of one command serves as input to the next, like a pipeline. The symbol '|' denotes a pipe.
The `grep` command works like a filter, searching a long string of characters for a particular pattern of
characters, and displays or highlights all lines that contain that pattern.

```bash
[SERVER]$ lscpu | grep avx512
```

How many AVX512 instructions does the KNL support? Identify each of them. For more information, have
a look at the following reference:

-   _Guide to Automatic Vectorization with Intel AVX-512 Instructions in Knights Landing Processors_  
    <https://colfaxresearch.com/knl-avx512/>


**1.3.4** The utility `numactl` maps processes to specific NUMA nodes. Use this utility 
with the parameter --hardware (or -H) to obtain information about the NUMA nodes in the system.

```bash
[SERVER]$ numactl --hardware
```

The KNL servers we are using are configured as **quadrant-cache**, which means that the cluster mode
is set as quadrant and the MCDRAM is set as cache memory. Clustering mode is a unique feature of KNL
processors that allows us to divide the chip into separate virtual regions with the goal of keeping the
interconnections inside the chip to be as local as possible, thus lowering the latency and increasing
the bandwidth of on-die communications. When the KNL is configured in quadrant cluster mode, the tiles
are divided into four virtual regions called quadrants, which are spatially local to the four groups
of memory controllers. Memory addresses served by a memory controller in a specific quadrant
are guaranteed to be mapped only to the tiles contained in that quadrant. In the quadrant cluster mode there
is only one NUMA memory mode, numbered zero. The output of `numactl -H` for KNL configured as all-to-all and
hemisphere are identical to the quadrant mode. Tha most complex example is when the cluster mode is set to
SNC-4 and the memory mode is set to flat. The quadrant mode is transparent to software, which means that there is
no need to do anything special to benefit from this mode. This is the reason why we have chosen this
configuration for this training.

For more information, have a look at the following reference:

-   _Clustering Modes in Knights Landing Processors_  
    <https://colfaxresearch.com/knl-numa/>

In addition, our system uses the on-package high bandwidt memory (HBM), or MCDRAM, configured as cache.
In cache mode, the MCDRAM works like a last level cache (Level 3 in our case), which means that all
memory access go through the MCDRAM to reach the DDR4 memory. As the MCDRAM is several times faster
than the DDR4 memory, performance will be better if most of the data comes from or go to the MCDRAM
cache instead of the DDR4 memory.

For more information, have a look at the following reference:

-   _MCDRAM as High-Bandwidth Memory (HBM) in Knights Landing Processors_  
    <https://colfaxresearch.com/knl-mcdram/>

**1.3.5** The utility `numastat` displays memory statistics (such as allocation hits and misses)
for processes and the operating system on a per-NUMA-node basis. The option -m displays system-wide
memory usage information on a per-node basis, similar to the information found in /proc/meminfo.

```bash
[SERVER]$ numastat -m
```
______

### Quick Navigation ###

[Top](#top "Top of the page") | [Part 1](#part1 "Introduction to the Intel® Xeon Phi™ coprocessor") | [Part 2](#part2 "Compiling and running trivially simple applications") | [Part 3](#part3 "High Performance Test-Drive") | [Part 4](#part4 "Running a basic N-body simulation") | [Bottom](#bottom "Bottom of the page")

______

<a name="part2"></a>

# Practical Exercices - Part 2 #

## Compiling and running trivially simple applications ##

### 2.1 Goals ###

Traditionally, “Hello World” programs are used to illustrate basic syntax; most of the examples
of this session will follow this tradition. The following set of activities will show you how
to compile trivially simple source codes for native Intel Xeon Phi coprocessor execution. You
will also learn how to offload parts of the code or specific function calls of an executable
running on the host to the coprocessor, and will have the opportunity to play with simple
MPI and OpenMP examples.

### 2.1.1 Overview of Vectorization ###

The Vector Processing Units present in the cores of Intel Xeon and Intel Xeon Phi architecture (described in Section 1.2), provide support for the execution of vector instructions which operates simultaneously on a set of data items known as a vector. On the contrary, scalar instructions operate on single data items. This kind of parallelism is known as data-level parallelism. Considering the source code of an application, the best candidates to explore data parallelism are the loops with independent iterations and with a body composed by a few lines. The parallelization process of an application using data parallelism is known as **vectorization**. Compilers offer support for developers to explore vectorization in the following ways:

- Automatic vectorization: the compiler implements heuristics that change scalar instructions to vector instructions automatically, but only in cases where there is no modification on the final results.

- Guided Vectorization: when the compiler is not able to automatically vectorize the source code, the developer can use pragmas to instruct the compiler about the vectorization.

- Low level vectorization: the developer can use specific compiler libraries to develop vector code.


### 2.2 Hands-on Activities ##

**2.2.1** A development system with Intel Xeon Phi coprocessors must have the Intel
software development tools installed, such as compilers, parallelization libraries
and performance tuning utilities to support high performance code compilation. That said,
before compiling and linking any source code, we need to be sure that 1) the host system has
the Intel C (icc) and C++ (icpc) compilers, the libraries and the utilities we will
use and 2) the environment is set up properly. 

In order to verify that the compilers are installed, run the following commands in the
host system:

```bash
[SERVER]$ icc -V
[SERVER]$ icpc -V
```

**2.2.2** Let us begin with a trivial code just to check if everything is running fine.
Take a look at the source code `hello.c` located at **SOURCE-DIR**, then compile and
execute it:

```bash
[SERVER]$ cd SOURCE-DIR
[SERVER]$ cat ./hello.c
[SERVER]$ icc hello.c -o hello
[SERVER]$ ./hello
```
  > Hello world! I have 272 logical cores.


**Note:** All the source codes we will be using in the following
activities are located in **SOURCE-DIR**.

For more information, check the [**"getting the source files"**](#get_repo) section.

**2.2.3** Automatic vectorization

In order to enable the compiler to vectorize the code automatically, the developer needs to use the compiler directive “-O” 
(which stands for optimization), followed by a number - 1, 2 or 3 - that indicates the level of optimization. The 
option `-qopt-report` creates a report in a text file with the same name of the source code added by the prefix `.optrpt`, 
that shows the optimizations performed for each loop and information in case any extra optimizations were inhibited.
In this next example we will compile the code `vect.c` using the compiler directive `-O3` and `-qopt-report`.

```bash
[SERVER]$ icc vect.c -o vectAVX512 -O3 -qopt-report5
```

Open the vectorization report `vect.optrpt` and search for `loop` on main function. This loop was automaticaly vectorized, but the loop on `hist` function was not, due to data dependencies. The indirection in the index of variable samples inside function `hist` inhibited vectorization. Note the following message on the vectorization report:
 
#### Loop on main:
  
```
LOOP BEGIN at vect.c(37,3)  
    remark #25045: Fused Loops: ( 37 41 )  
    remark #15388: vectorization support: reference B[i] has aligned access   [ vect.c(38,10) ]  
    remark #15388: vectorization support: reference A[i] has aligned access   [ vect.c(38,5) ]  
    remark #15388: vectorization support: reference A[i] has aligned access   [ vect.c(42,5) ]  
    remark #15388: vectorization support: reference A[i] has aligned access   [ vect.c(42,5) ]  
    remark #15388: vectorization support: reference B[i] has aligned access   [ vect.c(42,11) ]  
    remark #15305: vectorization support: vector length 4  
    remark #15309: vectorization support: normalized vectorization overhead 0.280  
    remark #15301: FUSED LOOP WAS VECTORIZED  
    remark #15448: unmasked aligned unit stride loads: 2  
    remark #15449: unmasked aligned unit stride stores: 3  
    remark #15475: --- begin vector cost summary ---  
    remark #15476: scalar cost: 25  
    remark #15477: vector cost: 6.250  
    remark #15478: estimated potential speedup: 3.990  
    remark #15487: type converts: 5  
    remark #15488: --- end vector cost summary ---  
    remark #25456: Number of Array Refs Scalar Replaced In Loop: 2  
    remark #25015: Estimate of max trip count of loop=22500  
LOOP END  
```

#### Loop on hist:

```
LOOP BEGIN at vect.c(11,3)  
   remark #15344: loop was not vectorized: vector dependence prevents vectorization  
   remark #15346: vector dependence: assumed FLOW dependence between hist[bin] (13:5) and hist[bin] (13:5)  
   remark #15346: vector dependence: assumed ANTI dependence between hist[bin] (13:5) and hist[bin] (13:5)  
   remark #25438: unrolled without remainder by 2  
LOOP END  
```

The new vector instruction set AVX-512, available on the Xeon Phi KNL, provides support for indirection
called Confliction Detection. Now perform the same compilation but using -xhost which sets up the
compiler to use the highest vector instruction set available, in this case AVX-512: 

```bash
[KNL-SERVER]$ icc vect.c -o vectAVX512 -O3 -qopt-report5 -xhost
```

Now the loop on function hist was vectorized using AVX-512.

**2.2.4** In this exercise we are going to explore task parallelism, by running a trivially simple application
that will use all the threads of the Knights Landing (KNL) server to simultaneously print "Hello world”,
using the OpenMP framework to write our first parallel (multi-threaded) application.

Take a look at the `hello-omp.c` source code located at **SOURCE-DIR**. The 'omp.h' library provides
the required utilities to write multi-thread codes; the 'omp_get_max_threads()' returns the maximum
number of threads available on the system; the 'imp_get_thread_num()' returns the thread ID. The 'printf'
function prints the thread ID so we can visualize the parallelism. Finally, the '#pragma omp parallel'
directive is responsible for the execution of the sequence of instructions defined by the open and close
curly brackets in parallel, using all the threads available on the system.

Now compile source code and run the generated executable file:

```bash
[KNL-SERVER]$ icc -qopenmp -o hello-imp  hello-omp.c
[KNL-SERVER]$ ./hello-omp
```

How many threads did you get? Is this the result you were expecting?

Notice that the output is not ordered; this occurs because each logical thread executes independently.
To obtain an ordered output, we can pipe the result to the Linux command `sort`, which will
rearrange the lines in a text file so that they are sorted, numerically and alphabetically.
The output can be ordered using the following command:

```bash
[KNL-SERVER]$ ./hello-omp | sort -nk5
```

We can set the maximum number
of OpenMP threads using the environment variable OMP_NUM_THREADS. To do so, we need to set the value
of this variable in the command shell in which the program is going to run, before invoking the program:

```bash
[KNL-SERVER]$ export OMP_NUM_THREADS=32
[KNL-SERVER]$ ./hello-omp
```
Run again using different values of OMP_NUM_THREADS. To check the current value of OMP_NUM_THREADS, use the
command `env` and search for the pattern OMP using `grep`:

```bash
[KNL-SERVER]$ env | grep OMP
```

To delete the OMP_NUM_THREADS environment variable, use the command `unset`:

```bash
[KNL-SERVER]$ unset OMP_NUM_THREADS
```

**2.2.5** One major difference between programming for a single system and for a cluster is that
each cluster node has a separate memory space. Unlike multiple threads running in a shared memory
space, communication between disjoint memory spaces usually requires the programmer to make
explicit calls to communication routines. The explicit communications occur via messages and
the Message Passing Interface (MPI) is the standard way to send and receive messages. MPI is
not a programming language, but instead a set of library routines that can be called from
C/C++ and Fortran programs. MPI programs typically employ a single-program, multiple-data (SPMD)
approach: the same MPI application is launched on each MPI host or, in other words, each MPI host
executes the same program. However, it does not mean that all processes perform
the same work. At runtime, each MPI process is assigned a unique identifier called MPI rank.
Multiple instances, or MPI ranks, of the same program run concurrently, where each rank computes
a different part of the larger problem and uses MPI calls to communicate data between ranks.

Let us start with a trivially simple “Hello World” application for MPI. Take a look at the
hello-mpi.c source code. MPI implementations typically provide compiler wrappers (e.g. `mpicc`,
`mpiicc`, `mpiicpc`, etc) to simplify the process of building MPI programs, and utilities (e.g.
`mpirun`, `mpiexec`) to launch them. In order to verify that the wrappers and utilities are
all set, run the following commands:

```bash 
[SERVER]$ mpiicc -v
[SERVER]$ mpiicpc -v
[SERVER]$ mpirun -info
```

Let us start by using the mpiicc wrapper to compile the hello-mpi.c
source code and the mpirun utility to run the binary in the host system:

```bash
[SERVER]$ mpiicc hello-mpi.c -o hello-mpi
[SERVER]$ mpirun -n 32 ./hello-mpi
```

Notice that the output is not ordered by rank; this occurs because each logical thread executes
independently. As we have already seen, to obtain an ordered output, we can pipe the output to
the Linux command `sort`:

```bash
[SERVER]$ mpirun -n 32 ./hello-mpi | sort -nk5
```

**2.2.6** In this activity, we will work on a more realistic MPI application.
Take a look at the source file `montecarlo.c`, a sample program that estimates the
value of π (pi) using the Monte Carlo method. For more details please check the link below:

<http://software.intel.com/en-us/articles/using-the-intel-mpi-library-on-intel-xeon-phi-coprocessor-systems>

Let us start by generating the binary for the Xeon Phi processor:

```bash 
[SERVER]$ mpiicc montecarlo.c -o montecarlo
[SERVER]$ mpiicc -mmic montecarlo.c -o montecarlo.mic
```

We are going to learn how we can launch an MPI job on the coprocessors
from the host system. First we need to set an additional environment
variable on the host, `I_MPI_MIC`, to enable the MPI communication
between host and coprocessors (valid values are: enable|yes|on|1):

```bash
[SERVER]$ export I_MPI_MIC=enable
```

Now execute the application on the host and then on the coprocessors,
using the the flags `–host` and `–n`, which specifies the host name and the
number of MPI processes, respectively (be patient, execution time is
longer compared to the previous exercises):

```bash
[SERVER]$ mpirun -host localhost -n 32 ./montecarlo
[SERVER]$ mpirun -host mic0 -n 240 ./montecarlo.mic
[SERVER]$ mpirun -host mic1 -n 240 ./montecarlo.mic
[SERVER]$ mpirun -host mic2 -n 240 ./montecarlo.mic
[SERVER]$ mpirun -host mic3 -n 240 ./montecarlo.mic
[SERVER]$ mpirun -host mic4 -n 240 ./montecarlo.mic
```
  
In order to start the application on two coprocessors simultaneously, we
can specify the list of hosts and their respective parameters using the
separator `:`, as shown below:

```bash
[SERVER]$ mpirun -host mic0 -n 240 ./montecarlo.mic : -host mic1 –n 240 ./montecarlo.mic : -host mic2 –n 240
```

Using this syntax, let us now execute the MPI application using all available threads:

```bash
[SERVER]$ mpirun -host localhost -n 32 ./montecarlo : -host mic0 -n 240 ./montecarlo.mic : -host mic1 -n 240 ./montecarlo.mic : -host mic2 -n 240 ./montecarlo.mic
```
______

### Quick Navigation ###

[Top](#top "Top of the page") | [Part 1](#part1 "Introduction to the Intel® Xeon Phi™ coprocessor") | [Part 2](#part2 "Compiling and running trivially simple applications") | [Part 3](#part3 "High Performance Test-Drive") | [Part 4](#part4 "Running a basic N-body simulation") | [Bottom](#bottom "Bottom of the page")

______

<a name="part3"></a>

# Practical Exercises - Part 3 #

## Getting started on KNL - Cornell Virtual Workshop Training ##

### 3.1 Goals ###

In this part we will follow the virtual workshop training entitled 'Getting started on KNL',
provided by the Cornell University Center for Advanced Computing (CAC), which emphasises some prominent
characteristics of the Intel KNL processor architecture. The virtual workshop includes short,
relevant exercises to highlight some features that we have already touched in Part 1 and Part 2
of the present training.

### 3.2 Hands-on Activities ###

Please access the link below, read carefully the concepts and try to reproduce the proposed exercises
on the KNL server you are using. There are some specific topics that we need to adapt to our environment, so pleasse
refer to the teaching assistant before you start. In particular, we are going to skip the topic "Tools for Tuning",
because it is beyond the scope of the present training and we will not be able to reproduce the proposed exercises.

<https://cvw.cac.cornell.edu/KNLStart/>

______

### Quick Navigation ###

[Top](#top "Top of the page") | [Part 1](#part1 "Introduction to the Intel® Xeon Phi™ coprocessor") | [Part 2](#part2 "Compiling and running trivially simple applications") | [Part 3](#part3 "High Performance Test-Drive") | [Part 4](#part4 "Running a basic N-body simulation") | [Bottom](#bottom "Bottom of the page")

______

<a name="part4"></a>

# Practical Exercises - Part 4 #

## Running a basic N-body simulation ##

### 4.1 Goals ###

This is an optional, more challenging activity. You are invited to follow Part 1 of the N-body simulation
example developed by Intel® Software Innovator 'Johnny Chan', which describes a step by step code optimization
journey to boost performance of a toy N-body simulation algorithm on a single KNL server.

### 4.2 Hands-on Activities ###

Please access the link below ,read carefully and try to reproduce the optimization steps described by the author
of the article. There are some specific topics that we need to adapt to our environment, so pleasse
refer to the teaching assistant before you start.

<https://mathalope.co.uk/2017/09/07/high-performance-computing-hpc-on-intel-xeon-phi-n-body-simulation-example/>

______

### Quick Navigation ###

[Top](#top "Top of the page") | [Part 1](#part1 "Introduction to the Intel® Xeon Phi™ coprocessor") | [Part 2](#part2 "Compiling and running trivially simple applications") | [Part 3](#part3 "High Performance Test-Drive") | [Part 4](#part4 "Running a basic N-body simulation") | [Bottom](#bottom "Bottom of the page")

<!-- {:target="_blank"} -->

______


<a name="bottom"></a>
