# csp-c

CSP problems for benchmarking symbolic execution. This benchmark suite
is a result of conversion into C programs of the CSP problems in the
[XCSP3](http://www.xcsp.org/) suite. The C programs are to be
compiled into bitcode for execution with
[KLEE](https://github.com/klee/klee.git) or KLEE-based tools such as
[Tracer-X](http://www.comp.nus.edu.sg/~tracerx), or [LLBMC](http://llbmc.org/).

`extensional-N` directories contain C code translated from problems
with extensional constraints for running with KLEE or
LLBMC. `intensional-N` directories contain C code translated from
problems with intensional constraints for running with KLEE or LLBMC.

The `data` directory contains the execution time data of the tools on
this benchmark suite in OpenDocument Spreadheet (ods) format. We collected
the data using 3.40 GHz Intel Core i7-6700 32GB RAM machine running
Ubuntu 16.04.

Developed by Sahil Verma <vsahil@iitk.ac.in> during internships at the
National University of Singapore, under the guidance of [Andrew
Santosa](https://github.com/domainexpert) and [Roland
Yap](http://www.comp.nus.edu.sg/~ryap).

This software is in the public domain.

