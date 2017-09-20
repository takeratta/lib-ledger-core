// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni
import Foundation

final class AccountCreationInfoCallback: NSObject, LGAccountCreationInfoCallback {
    private var onCallbackBlock: ((LGAccountCreationInfo?, LGError?) -> Void)?

    func setOnCallback(_ block: @escaping (LGAccountCreationInfo?, LGError?) -> Void) -> AccountCreationInfoCallback {
        self.onCallbackBlock = block
        return self
    }

    func onCallback(_ result: LGAccountCreationInfo?, error: LGError?) -> Void {
        self.onCallbackBlock?(result, error)
    }
}
