
#ifndef CPP_DEMO_PAIR_H
#define CPP_DEMO_PAIR_H

template<typename T, typename K>
class Pair {
private:
    T a;
    K b;
public:
    Pair(const T &aVal, const K &bVal) : a(aVal), b(bVal) {
    }

    Pair() = default;

    Pair(const Pair<T, K> &);

    T &first();

    K &second();

    T first() const {
        return a;
    }

    K second() const {
        return b;
    }
};

template<typename T, typename K>
Pair<T, K>::Pair(const Pair<T, K> &pair) {
    this->a = pair.a;
    this->b = pair.b;
}

template<typename T, typename K>
T &Pair<T, K>::first() {
    return a;
}

template<typename T, typename K>
K &Pair<T, K>::second() {
    return b;
}

#endif //CPP_DEMO_PAIR_H
