# Arduino LM35 Temp Monitor

## Mo ta

Du an nay doc nhiet do tu cam bien LM35 bang Arduino, gui du lieu qua Serial va hien thi tren may tinh bang ung dung do thi. Repo duoc to chuc de tach rieng firmware, ung dung PC, tai lieu va mo phong.

## Tinh nang

- Doc nhiet do tu 3 kenh LM35: A0, A1, A2
- Xuat du lieu duoi dang JSON de PC app de phan tich
- Ho tro mo phong Proteus cho mach cam bien
- Quan ly lich su phat trien bang Git va GitHub

## Phan cung

| Thanh phan | So luong | Ghi chu |
| --- | --- | --- |
| Arduino Uno | 1 | Vi dieu khien chinh |
| Cam bien LM35 | 3 | Gan vao A0, A1, A2 |
| LCD 16x2 | 1 | Hien thi gia tri nhiet do |
| Day noi, breadboard | 1 bo | Lap rap mach |

## Huong dan su dung

1. Nap firmware trong `firmware/LM35_TempReader` vao Arduino.
2. Mo Serial Monitor hoac ung dung PC de nhan du lieu.
3. Kiem tra JSON output va do thi nhiet do theo thoi gian.
4. Neu can, mo file Proteus trong thu muc `simulation`.

## Cau truc thu muc

- `firmware/`: ma Arduino doc nhiet do LM35
- `pc_app/`: ung dung C# hien thi du lieu va do thi
- `simulation/`: file mo phong Proteus
- `docs/`: tai lieu va bao cao
- `libs/`: thu vien bo sung

## Thanh vien nhom

- Pham Ngoc Quang Huy - MSSV N23DCCI034 - Lop D23CQCI01-N
