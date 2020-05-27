// https://www.learncpp.com/cpp-tutorial/131-function-templates/
template <typename T>
const T &max(const T &x, const T &y)
{
    return (x > y) ? x : y;
}