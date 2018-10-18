#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <string>
#include <sstream>
#include <utility>

template<class T>
std::string to_string(T t)
{
    std::stringstream ss;
    ss << t;
    return ss.str();

}
template<typename T, typename P>
T remove_if(T beg, T end, P pred)
{
    T dest = beg;
    for (T itr = beg;itr != end; ++itr)
        if (!pred(*itr))
            *(dest++) = *itr;
    return dest;
}

#endif // FUNCIONES_H
