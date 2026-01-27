#!/usr/bin/env bash

# 使い方: ./check_cpp_pair.sh 対象フォルダ
TARGET_DIR="$1"

missing_dirs=()

# 再帰的にディレクトリを探索
while IFS= read -r -d '' dir; do
    # 少なくとも cpp ファイルが1つ以上あるディレクトリだけを対象にする
    if ls "$dir"/*.cpp >/dev/null 2>&1; then
        if [[ ! ( -f "$dir/a.cpp" && -f "$dir/b.cpp" ) && \
              ! ( -f "$dir/A.cpp" && -f "$dir/B.cpp" ) ]]; then
            missing_dirs+=("$dir")
        fi
    fi
done < <(find "$TARGET_DIR" -type d -print0)

# 結果出力
if [[ ${#missing_dirs[@]} -eq 0 ]]; then
    echo "すべての対象フォルダで条件を満たしています"
else
    echo "条件を満たさなかったフォルダ一覧:"
    for d in "${missing_dirs[@]}"; do
        echo "$d"
    done
fi

