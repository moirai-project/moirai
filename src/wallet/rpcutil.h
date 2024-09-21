// Copyright (c) 2022 The Moirai Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Utility functions for RPC commands
 */
#ifndef MOICOIN_WALLET_UTIL_H
#define MOICOIN_WALLET_UTIL_H
#include <boost/filesystem/path.hpp>
#include "util.h"

boost::filesystem::path GetBackupDirFromInput(std::string strUserFilename);

#endif // MOICOIN_WALLET_UTIL_H
