/** 
 * @brief  Boost code
 * 作为C++来说，不能不了解boost，尤其是当你的傻逼领导还要求在2024年使用C++03（没错，说的就是我上一任傻逼领导），boost简直是不二之选。
 * 但是站在现在的，以c++11/c++17为核心版本的时代，部分boost的功能已经可以不需要了。
 * 同时，boost发展过程中也出现了很多臃肿的代码，且boost的部分功能已经挪到了C++标准库（尽管可能不是一气呵成），但对于能用std的部分还是用std。
 * 本系列主要讲解c++标准中没有，或者需要在c++20才会引入的特性。
 * 这里涉及到很多内容，重点放在算法、网络、异步等模块。
 * 当然，我也会兼顾很多基础的能力。
 */

#include <boost/boost/version.hpp>

int main() {
    // 两个boost版本宏
    BOOST_VERSION;
    BOOST_LIB_VERSION;
    return 0;
}
