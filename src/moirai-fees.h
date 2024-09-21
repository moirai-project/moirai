// Copyright (c) 2024 The Moirai Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_MOICOIN_FEES_H
#define BITCOIN_MOICOIN_FEES_H

#include "amount.h"
#include "chain.h"
#include "chainparams.h"

#ifdef ENABLE_WALLET

enum FeeRatePreset
{
    MINIMUM,
    MORE,
    WOW,
    AMAZE,
    MANY_GENEROUS,
    SUCH_EXPENSIVE
};

/** Estimate fee rate needed to get into the next nBlocks */
CFeeRate GetMoiraiFeeRate(int priority);
const std::string GetMoiraiPriorityLabel(int priority);
#endif // ENABLE_WALLET
CAmount GetMoiraiMinRelayFee(const CTransaction& tx, unsigned int nBytes, bool fAllowFree);
CAmount GetMoiraiDustFee(const std::vector<CTxOut> &vout, const CAmount dustLimit);

#endif // BITCOIN_MOICOIN_FEES_H
