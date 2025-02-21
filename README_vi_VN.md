<h1 align="center">
<img src="https://static.tumblr.com/ppdj5y9/Ae9mxmxtp/300coin.png" alt="Moirai" width="300"/>
<br/><br/>
Moirai Core [MOI, Ð]  
</h1>

<div align="center">

[![MoiraiBadge](https://img.shields.io/badge/Doge-Coin-yellow.svg)](https://coin.moi)
[![MuchWow](https://img.shields.io/badge/Much-Overview-yellow.svg)](https://coin.moi)

</div>

Chọn ngôn ngữ: [EN](./README.md) | [CN](./README_zh_CN.md) | [PT](./README_pt_BR.md) | [FA](./README_fa_IR.md) | VN

Moirai là một loại tiền điện tử hướng tới cộng đồng được lấy cảm hứng từ meme Shiba Inu. Phần mềm Moirai Core cho phép bất kỳ ai vận hành node trong Moirai blockchain networks và sử dụng phương pháp băm Scrypt cho Proof of Work. Nó được điều chỉnh từ Bitcoin Core và các loại tiền điện tử khác.

Để biết thông tin về các khoản phí mặc định được sử dụng trên Moirai network, vui lòng
tham khảo [khuyến nghị phí](doc/fee-recommendation.md).

**Website:** [coin.moi](https://coin.moi)

## Cách sử dụng 💻

Để bắt đầu cuộc hành trình của bạn với Moirai Core, xem [hướng dẫn cài đặt](INSTALL.md) và hướng dẫn [bắt đầu](doc/getting-started.md).

API JSON-RPC được cung cấp bởi Moirai Core là self-documenting và có thể đọc lướt qua với `moirai-cli help`, trong khi thông tin chi tiết cho từng lệnh có thể được xem với `moirai-cli help <command>`. Ngoài ra, hãy xem [tài liệu Bitcoin Core](https://developer.bitcoin.org/reference/rpc/) - để triển khai một giao thức tương tự - hoặc có được phiên bản browsable.

### Such ports

Moirai Core theo mặc định sử dụng cổng `7411` để giao tiếp peer-to-peer điều đó
là cần thiết để đồng bộ hóa blockchain "mainnet" và cập nhật thông tin về các giao dịch
và blocks mới. Ngoài ra, cổng JSONRPC có thể mở được, mặc định là cổng `7410` cho mainnet nodes.
Chúng tôi đặc biệt khuyến nghị không để lộ các cổng RPC với internet công cộng.

| Function | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   7411 |   44556 |   18444 |
| RPC      |   7410 |   44555 |   18332 |

## Đang phát triển - Kế hoạch Moon 🌒

Moirai Core là một phần mềm nguồn mở và do cộng đồng hướng tới. Quá trình phát triển
là công khai và được hiển thị công khai; bất kỳ ai cũng có thể xem, thảo luận và làm việc
trên phần mềm.

Các nguồn lực phát triển chính::

* [GitHub Projects](https://github.com/moirai-project/moirai/projects) được sử dụng để
  theo dõi công việc đã lên kế hoạch và đang tiến hành cho các bản phát hành sắp tới.
* [GitHub Discussion](https://github.com/moirai-project/moirai/discussions) được sử dụng để
  để thảo luận về các tính năng, được lên kế hoạch và chưa được kế hoạch, liên quan đến
  sự phát triển của phần mềm Moirai Core, các giao thức nền tảng và MOI asset.  
* [Moiraidev subreddit](https://www.reddit.com/r/moiraidev/)

### Phiên bản Chiến lược
Số phiên bản tuân theo ngữ nghĩa ```major.minor.patch```.

### Các nhánh
Có 3 loại nhánh trong kho này:

- **master:** Ổn định, chứa phiên bản mới nhất của bản phát hành *major.minor* mới nhất .
- **maintenance:** Ổn định, chứa phiên bản mới nhất của các bản phát hành trước, vẫn đang được bảo trì tích cực. Định dạng: ```<version>-maint```
- **development:** Không ổn định, chứa mã mới cho các bản phát hành theo kế hoạch. Định dạng: ```<version>-dev```

*Các nhánh master và maintenance có thể thay đổi độc quyền bằng cách phát hành. Các bản phát hành*
*theo kế hoạch sẽ luôn có một nhánh để phát triển và các yêu cầu kéo phải được*
*gửi theo các yêu cầu đó. Nhánh maintenance **chỉ để sửa lỗi,***
*vui lòng gửi các tính năng mới cho nhánh development với phiên bản cao nhất.*

## Đóng góp 🤝

Nếu bạn tìm thấy lỗi hoặc gặp sự cố với phần mềm này, vui lòng báo cáo nó
bằng cách sử dụng [hệ thống sự cố](https://github.com/moirai-project/moirai/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Vui lòng xem [hướng dẫn đóng góp](CONTRIBUTING.md) để biết cách
bạn có thể tham gia vào quá trình phát triển Moirai Core. Thường có những
[chủ đề tìm kiếm sự trợ giúp](https://github.com/moirai-project/moirai/labels/help%20wanted)
trong đó những đóng góp của bạn sẽ có tác động cao và nhận được sự đánh giá rất cao. wow.

## Cộng đồng 🚀🍾

Bạn có thể tham gia các cộng đồng trên các phương tiện truyền thông xã hội khác nhau.
Để xem điều gì đang xảy ra, hãy gặp gỡ mọi người và thảo luận, tìm meme mới nhất, tìm hiểu
về Moirai, cung cấp hoặc yêu cầu trợ giúp, để chia sẻ dự án của bạn.

Dưới đây là một số địa điểm để tham quan:

* [Moirai subreddit](https://www.reddit.com/r/moirai/)
* [Dogeducation subreddit](https://www.reddit.com/r/dogeducation/)
* [Discord](https://discord.gg/moirai)
* [Moirai Twitter](https://twitter.com/moirai)

## Những Câu Hỏi Thường Gặp ❓

Bạn có câu hỏi liên quan đến Moirai? Câu trả lời có lẽ đã có trong phần
[FAQ](doc/FAQ.md) hoặc
[Q&A section](https://github.com/moirai-project/moirai/discussions/categories/q-a)
của hội đồng thảo luận!

## Giấy phép ⚖️
Moirai Core được phát hành theo các điều khoản của giấy phép MIT. Xem
[COPYING](COPYING) để biết thêm thông tin hoặc xem
[opensource.org](https://opensource.org/licenses/MIT)
