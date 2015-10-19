## TODO
- [x] image resource
- [x] sound
- [x] Android Test or find Reason
- [x] Android Sound
- [x] Sound volume 0 background
- [x] Orientation
- [x] hide navigation bar, status bar code test(Android)
- [x] auto insert android code python
- [x] Storage Test Code
- [x] Storage Test iOS
- [x] Storage Test Android
- [ ] config
- [ ] record
- [ ] start
- [ ] code Gen Tool

## TODO page

### config
- [x] all button sound
- [x] all button callback make
- [x] all button data setup
- [x] number text error fix
- [x] MAX MIN button disable => Opacity is not cool
- [x] audio volume change
- [x] android test(설정에서 음향관령 버튼 막 클릭시 이슈 발생)

### record
- [ ] table view cell with data
### start

### code Gen Tool

## ISSUE
- [ ] 설정에서 음향관련 버튼 막 클릭하다보면 다음의 로그를 출력하고 설정 수정이 되지않음.(frameworks/wilhelm/src/android/AudioPlayer_to_android.cpp:410: pthread_mutex_lock_timeout_np returned 11)
- [ ] native audio access

## command
- fuse build -t iOS
- open .build/iOS-Debug/buddha.xcodeproj/
- fuse preview -t Android
- python codegen.py
- ./androidbuild
- ./iosbuild
