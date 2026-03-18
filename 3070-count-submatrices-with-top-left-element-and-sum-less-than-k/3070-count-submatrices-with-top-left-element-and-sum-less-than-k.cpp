using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;


namespace stdr = std::ranges;
namespace stdv = std::views;

class Solution
{
public:
    u32 countSubmatrices(std::vector<std::vector<int>>& g, int k) noexcept
    {
        u16 h = static_cast<u16>(g.size());

        u16 w = 0;
        for (int s = 0; int& v : g[0])
        {
            v += s;
            s = v;
            w += s <= k;
        }

        u32 r = w;
        for (u16 y = 1; y != h && w; ++y)
        {
            auto &p = g[y - 1], &c = g[y];

            c[0] += p[0];
            u16 x = 1;
            while (x != w)
            {
                c[x] += c[x - 1] + p[x] - p[x - 1];
                if (c[x] > k) break;
                ++x;
            }
            r += w = x - (c[0] > k);
        }

        return r;
    }
};