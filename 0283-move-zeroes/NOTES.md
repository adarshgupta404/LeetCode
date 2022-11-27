<div class="discuss-markdown-container"><p>The idea is that we go through the array and gather all zeros on our road.<br>
<img src="https://assets.leetcode.com/users/olsh/image_1537442610.png" alt="image"></p><p>
</p><p>Let's take our example:<br>
the first step - we meet 0.<br>
Okay, just remember that now the size of our snowball is 1. Go further.<br>
<img src="https://assets.leetcode.com/users/olsh/image_1537442825.png" alt="image"></p><p>
</p><p>Next step - we encounter 1. Swap the most left 0 of our snowball with element 1.</p><p>
</p><p><img src="https://assets.leetcode.com/users/olsh/image_1537444682.png" alt="image"></p><p>
</p><p>Next step - we encounter 0 again!</p><p>
</p><p><img src="https://assets.leetcode.com/users/olsh/image_1537443824.png" alt="image"></p><p>
</p><p>Our ball gets bigger, now its size = 2.</p><p>
</p><p><img src="https://assets.leetcode.com/users/olsh/image_1537443928.png" alt="image"></p><p>
</p><p>Next step - 3. Swap again with the most left zero.</p><p>
</p><p><img src="https://assets.leetcode.com/users/olsh/image_1537444816.png" alt="image"></p><p>
</p><p>Looks like our zeros roll all the time</p><p>
</p><p><img src="https://assets.leetcode.com/users/olsh/image_1537444189.png" alt="image"></p><p>
</p><p>Next step - 12. Swap again:</p><p>
</p><p><img src="https://assets.leetcode.com/users/olsh/image_1537444465.png" alt="image"></p><p>
</p><p>We reached finish! Congratulations!</p><p>
</p><p><img src="https://assets.leetcode.com/users/olsh/image_1537444540.png" alt="image"></p><p>
</p><p>Here's the code</p><p>
</p><pre><code><span class="hljs-class"><span class="hljs-keyword">class</span> <span class="hljs-title">Solution</span> {</span>
     <span class="hljs-function"><span class="hljs-keyword">public</span> <span class="hljs-keyword">void</span> <span class="hljs-title">moveZeroes</span><span class="hljs-params">(<span class="hljs-keyword">int</span>[] nums)</span> </span>{
        <span class="hljs-keyword">int</span> snowBallSize = <span class="hljs-number">0</span>; 
        <span class="hljs-keyword">for</span> (<span class="hljs-keyword">int</span> i=<span class="hljs-number">0</span>;i&lt;nums.length;i++){
	        <span class="hljs-keyword">if</span> (nums[i]==<span class="hljs-number">0</span>){
                snowBallSize++; 
            }
            <span class="hljs-keyword">else</span> <span class="hljs-keyword">if</span> (snowBallSize &gt; <span class="hljs-number">0</span>) {
	            <span class="hljs-keyword">int</span> t = nums[i];
	            nums[i]=<span class="hljs-number">0</span>;
	            nums[i-snowBallSize]=t;
            }
        }
    }
}
</code></pre><p></p></div>
