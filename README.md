# hello-sdk-sample
Hello SDK sample code to try out [Conan, the C/C++ Package Manager](https://conan.io/) and [GitVersion](https://gitversion.net/).    

It uses [wangyoucao577.jfrog.io](https://wangyoucao577.jfrog.io/) as [Conan](https://conan.io/) storage which has been recommended in [Uploading to Artifactory Cloud Instance](https://docs.conan.io/en/latest/uploading_packages/artifactory/artifactory_cloud.html).     


Refer to [wangyoucao577/hello-app-sample](https://github.com/wangyoucao577/hello-app-sample) for the executable app that invokes this Hello SDK.     

## Local Development

### Prerequisites
- latest [conan](https://docs.conan.io/en/latest/installation.html)      
- latest [cmake](https://cmake.org/)
- latest `C/C++` compiler on your platform:          
  - `g++` on `linux`
  - `clang` on `macosx`
  - `visual studio` on `windows`      


### Build
```bash
$ conan create .
```

## Automation 
- Once your code is ready, run `git push` that will result to [automatically build and publish](https://github.com/wangyoucao577/hello-sdk-sample/actions) processes.     
- The generated binaries's version is calculated by [GitVersion](https://gitversion.net/) according [GitVersion.yml](GitVersion.yml) rules.     
- Binaries(`include`/`lib`) will be published to [wangyoucao577.jfrog.io](https://wangyoucao577.jfrog.io/) after building.    
- In addition, [Draft a new release](https://github.com/wangyoucao577/hello-sdk-sample/releases/new) will result to code build and stable binaries publishing too.    

## View pre-built conan packages 
```bash
$ conan remote add my-conan-repo https://wangyoucao577.jfrog.io/artifactory/api/conan/test-conan-local
$ conan search '*' -r my-conan-repo
```

