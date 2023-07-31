#define FMT_HEADER_ONLY
#include <fmt/os.h>

int main(){
    auto out = fmt::output_file("outfile.txt");
    out.print("{}\n", "సమస్త ల ోకానికి నమస్కారం!");
    out.print("{}", "Hello World!");
    fmt::print("{}\n", "సమస్త ల ోకానికి నమస్కారం!");
    fmt::print("{}", "Hello World!\n");
    return 0;
}