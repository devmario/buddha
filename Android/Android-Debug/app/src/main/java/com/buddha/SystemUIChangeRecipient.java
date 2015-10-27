package com.buddha;

public interface SystemUIChangeRecipient
{
	public SystemUIChangeRecipient GetSystemUIChangeCallback();
	public void SystemUIChangeOccured();
}
