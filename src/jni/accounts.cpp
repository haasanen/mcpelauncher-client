#include <log.h>
#include "accounts.h"

std::shared_ptr<AccountManager> AccountManager::get(std::shared_ptr<Context>) {
    return std::make_shared<AccountManager>(AccountManager());
}

std::shared_ptr<FakeJni::JArray<Account>> AccountManager::getAccountsByType(std::shared_ptr<FakeJni::JString> type) {
    // Diagnostics: log what the game asks for. If Realms/identity screens
    // degrade, the fix is to populate this array with the signed-in user.
    Log::info("Account", "getAccountsByType(%s) -> 0 accounts", type->asStdString().c_str());
    return std::make_shared<FakeJni::JArray<Account>>(0);
}
