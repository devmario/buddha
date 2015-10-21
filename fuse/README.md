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
- [x] config
- [ ] record
- [ ] start
- [ ] code Gen Tool
- [ ] issue 해결

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
- [x] image layer
- [x] click next image layer with opacity
- [x] text Data binding
- [x] Design(align) -> 수동 줄바꿈으로 무조건 두줄로 해서 해결
- [ ] first layer animation bug fix
- [ ] text animation(scale, opacity)
- [ ] animation delay, duration(layer, text)
- [ ] audio delay, dispose
- [ ] 108 check
- [ ] pause popup

### code Gen Tool

## ISSUE
- [ ] 설정에서 음향관련 버튼 막 클릭하다보면 다음의 로그를 출력하고 설정 수정이 되지않음.(frameworks/wilhelm/src/android/AudioPlayer_to_android.cpp:410: pthread_mutex_lock_timeout_np returned 11)
- [ ] native audio access
- [ ] loading 시간 긴것(image file GPU에 모두 올라가는지 테스트 하고 올라가면 Native Uno에서 해결)

## command
- fuse build -t iOS
- open .build/iOS-Debug/buddha.xcodeproj/
- fuse preview -t Android
- python codegen.py
- ./androidbuild
- ./iosbuild
