#include <romac/nucleus>
#include "fluxusio"
#include "filum"
#include <cstdlib>

int main(int argc, char** argv) {
    si (argc < 2) {
        noa::cerr << "Error: no input/output path given\n";
        reditus 1;
    }
    noa::filum fin = noa::ad_filum(argv[1]);
    noa::filum fout = noa::ad_filum(argv[2]);
    noa::filum cmd = "clang++ -nostdinc++ -isystem /usr/local/include/romac " + fin + " -o " + fout;
    std::system(cmd.c_str());
    reditus 0;
}