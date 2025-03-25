template <int threshold,typename T>
bool is_valid(T collection[] ,size_t size)
{
    T sum{};//0
    for(size_t i{ 0 }; i < size; ++i) {
        sum += collection[i];
    }
    return (sum > threshold) ? true : false;
}