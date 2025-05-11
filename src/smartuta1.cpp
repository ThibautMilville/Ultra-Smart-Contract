#include <eosio/eosio.hpp>
#include <eosio/asset.hpp>
#include <eosio/print.hpp>

namespace ultratech_alliance {
    using namespace eosio;
    using namespace std;

    class [[eosio::contract("smartuta1")]] smartuta1 : public eosio::contract {
        using eosio::contract::contract;

    public:
        [[eosio::action]] void addutaoffer(string uniq) {
            print("Make UTA transact for Uniq ", uniq, "!");
        }

        [[eosio::action]] void delutaoffer(string offerid) {
            print("Cancel UTA Offer ID ", offerid, "!");
        }
    };
}