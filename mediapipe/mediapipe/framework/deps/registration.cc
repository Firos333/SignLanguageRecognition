// Copyright 2019 The MediaPipe Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "mediapipe/framework/deps/registration.h"

namespace mediapipe {

namespace {

constexpr char const* kTopNamespaces[] = {
    "mediapipe",
};

template <size_t SIZE, class T>
inline size_t array_size(T (&arr)[SIZE]) {
  return SIZE;
}

}  // namespace

/*static*/
const std::unordered_set<std::string>& NamespaceWhitelist::TopNamespaces() {
  static std::unordered_set<std::string>* result =
      new std::unordered_set<std::string>(
          kTopNamespaces, kTopNamespaces + array_size(kTopNamespaces));
  return *result;
}

}  // namespace mediapipe
